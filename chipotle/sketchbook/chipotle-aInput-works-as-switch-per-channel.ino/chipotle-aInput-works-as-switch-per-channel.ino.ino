
#include <MIDI.h>
MIDI_CREATE_DEFAULT_INSTANCE();
int cantidad = 6;
int outPin[6] = {
  3 , 5 , 6 , 9 , 10, 11
}
;
int analogInput[6] = {
 A0, A1, A2, A3, A4, A5
};
int notas[6] = {
  48, 49, 50, 51, 52, 53
};
//  54, 55, 56, 57, 58, 59};
//   60, 61, 62, 63, 63, 63};
int tiempo[6] = {
  0, 0, 0, 0, 0, 0
};
boolean buttonState [6] ;
unsigned long tiempoApagado [6];
  int valorPote[6];
int tiempoMin = 0;
int tiempoMax = 60;
int canalMIDI = 10;

void activarPin(int i) {

  buttonState[i] = true;
  tiempoApagado[i] = millis() + tiempo[i];
  digitalWrite(outPin[i], HIGH);
}


void HandleNoteOn(byte channel, byte pitch, byte velocity) {
   for (int i = 0; i < cantidad; i++) {
 valorPote[i] = analogRead (analogInput[i]);
  if (channel == canalMIDI) {
    if (velocity >= 30) {
      if (valorPote[i] > 20) {
          if (pitch == notas[i]) {
            activarPin(i);
          }

        }
      }
    }
  }
}

void setup() {
  for (int i = 0 ; i < cantidad; i++) {
    buttonState[i] = 0;
    pinMode(outPin[i], OUTPUT);
  }
  MIDI.begin(MIDI_CHANNEL_OMNI);
  MIDI.setHandleNoteOn(HandleNoteOn);

}


void loop() {
  for (int i = 0 ; i < cantidad; i++) {
    if (buttonState[i]) {
      if (millis () > tiempoApagado[i]) {
        buttonState[i] = false;
        digitalWrite (outPin[i], LOW);
      }
    }
  }
  MIDI.read();

}






