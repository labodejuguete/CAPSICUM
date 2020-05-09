#include <MIDI.h>
MIDI_CREATE_DEFAULT_INSTANCE();

int notas[]= {

  72,74,76,
  79,81,84,
  86,88,91,
 93,96,98,
 100,103,105,108,
  };
  
int inputs[]= {
  4,5,6,7,8,
  9,10,11,12,
  13,14,15,16,
  17,18,19};
 
  int estado[]= {
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
    1,1,1,1,
  };
  
int cantidad= 16;

void setup() { 
    MIDI.begin(4);
 for (int i = 0; i < cantidad; i++) {
  pinMode (inputs[i], INPUT_PULLUP);
 }
         
}


void loop() {
for (int i = 0; i < cantidad; i++) {
  estado[i]=digitalRead (inputs[i]);
  if (estado[i]== LOW){
MIDI.sendNoteOn(notas[i],127,4); 
}
  else{
  MIDI.sendNoteOff(notas[i],0,4);
  } 
}
  }    

