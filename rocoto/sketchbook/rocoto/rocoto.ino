
#include <MIDI.h> //incluye librería MIDI
MIDI_CREATE_DEFAULT_INSTANCE();//ésto va siempre que uses la librería
int cantidad = 6;
int outPin[6] = {
  2 , 3 , 4 , 5 , 6, 7
} ; //defino los numeros de salida digital
int inPin[6] = {
  10 , 9 , 8 , 11 , 12, 13
}; //defino los numeros de entrada digital

int analogInput[6] = {
  A0, A1, A2, A3, A4, A5
};
int notas[6] = {
  48, 49, 50, 51, 52, 53
};
boolean estadoSalida [6] ;
boolean estadoBoton[6];
unsigned long tiempoApagado [6];
int tiempoMin = 40; //tiempo minimo encendido
int tiempoMax = 4000; //tiempo maximo encendido (en milisegundos)
int canalMIDI = 10;

void activarPin(int i) {
    estadoBoton[i]= digitalRead (inPin[i]);
  int valorPote = analogRead (analogInput[i]);
  int tiempoEncendido = map (valorPote, 0, 1023, tiempoMin, tiempoMax); // si querés, podés dejar un tiempo fijo acá y listo
    if (estadoBoton[i] == LOW) {  estadoSalida[i] = true;
  tiempoApagado[i] = millis() + tiempoEncendido;
  digitalWrite(outPin[i], HIGH);
}
}


void HandleNoteOn(byte channel, byte pitch, byte velocity) {

  if (channel == canalMIDI) {
    if (velocity >= 30) {
      for (int i = 0; i < cantidad; i++) {
          if (pitch == notas[i]) {
            activarPin(i);  
        }
      }
    }
  }
}
void setup() {
  for (int i = 0 ; i < cantidad; i++) {
    estadoSalida[i] = 0;
    pinMode(outPin[i], OUTPUT);
    pinMode(inPin[i], INPUT_PULLUP);
  }
  MIDI.begin(MIDI_CHANNEL_OMNI);
  MIDI.setHandleNoteOn(HandleNoteOn);

}


void loop() {
  for (int i = 0 ; i < cantidad; i++) {
    if (estadoSalida[i]) {
      if (millis () > tiempoApagado[i]) {
        estadoSalida[i] = false;
        digitalWrite (outPin[i], LOW);
      }
    }
  }
  MIDI.read();

}






