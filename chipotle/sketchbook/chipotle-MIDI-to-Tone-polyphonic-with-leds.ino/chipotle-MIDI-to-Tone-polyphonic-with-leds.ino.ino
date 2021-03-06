//MIDI notes go from B0 (23) to G7 (104) - total 82 notes

#include <Tone.h>
#include <MIDI.h> 

MIDI_CREATE_DEFAULT_INSTANCE();

int cantidad_notas = 82;
int cantidad = 3;
Tone notePlayer[3];
int ledPin[] = {
9, 10, 11, 
} ;
int tonePin[] = {
 3, 5, 6,  
} ; 
int canalMIDI=9
int notasMIDI[] = {
  23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
  33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44,
  45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56,
  57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68,
  69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
  81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92,
  93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104
};

int tonos[] = {
  NOTE_B0, NOTE_C1, NOTE_CS1, NOTE_D1, NOTE_DS1, NOTE_E1, NOTE_F1, NOTE_FS1, NOTE_G1, NOTE_GS1,
  NOTE_A1, NOTE_AS1, NOTE_B1, NOTE_C2, NOTE_CS2, NOTE_D2, NOTE_DS2, NOTE_E2, NOTE_F2, NOTE_FS2, NOTE_G2, NOTE_GS2,
  NOTE_A2, NOTE_AS2, NOTE_B2, NOTE_C3, NOTE_CS3, NOTE_D3, NOTE_DS3, NOTE_E3, NOTE_F3, NOTE_FS3, NOTE_G3, NOTE_GS3,
  NOTE_A3, NOTE_AS3, NOTE_B3, NOTE_C4, NOTE_CS4, NOTE_D4, NOTE_DS4, NOTE_E4, NOTE_F4, NOTE_FS4, NOTE_G4, NOTE_GS4,
  NOTE_A4, NOTE_AS4, NOTE_B4, NOTE_C5, NOTE_CS5, NOTE_D5, NOTE_DS5, NOTE_E5, NOTE_F5, NOTE_FS5, NOTE_G5, NOTE_GS5,
  NOTE_A5, NOTE_AS5, NOTE_B5, NOTE_C6, NOTE_CS6, NOTE_D6, NOTE_DS6, NOTE_E6, NOTE_F6, NOTE_FS6, NOTE_G6, NOTE_GS6,
  NOTE_A6, NOTE_AS6, NOTE_B6, NOTE_C7, NOTE_CS7, NOTE_D7, NOTE_DS7, NOTE_E7, NOTE_F7, NOTE_FS7, NOTE_G7, NOTE_GS7,
};
void prenderTono(int i, int e) {
  notePlayer[i].play(tonos[e]);
  digitalWrite (ledPin[i], HIGH);
}
void apagarTono(int i) {
  notePlayer[i].stop();
  digitalWrite (ledPin[i], LOW);
}


void HandleNoteOn(byte channel, byte pitch, byte velocity) {

  for (int i = 0; i < cantidad; i++) {
    for (int e = 0; e < cantidad_notas; e++) {
      if (channel == canalMIDI[i]) {
        if (pitch == notasMIDI[e]) {
          prenderTono(i, e);
        }
      }
    }
  }
}
void handleNoteOff(byte channel, byte pitch, byte velocity) {
  for (int i = 0; i < cantidad; i++) {
    for (int e = 0; e < cantidad_notas; e++) {
      if (channel == canalMIDI[i]) {
        if (pitch == notasMIDI[e]) {
          apagarTono(i);
        }
      }
    }
  }
}

void setup() {
  for (int z = 0; z < 3; z++) {
    pinMode (ledPin[z], OUTPUT);
     notePlayer[z].begin(tonePin[z]);
  }
  MIDI.begin(MIDI_CHANNEL_OMNI);
  MIDI.setHandleNoteOn(HandleNoteOn);
  MIDI.setHandleNoteOff(handleNoteOff);
}


void loop() {
  MIDI.read(); 
}
