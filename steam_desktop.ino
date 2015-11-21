#include "pitches.h"
int melody[] = {
  NOTE_C6
};
int noteDurations[] = {
4
};
void setup() {
  Serial.begin(9600);
  //pinMode(12, OUTPUT);
  pinMode(A1, INPUT);
}
void loop() {
  
int x = analogRead(A1);

if (x < 900){
  for(int i =0; i < 1; i++){
    int noteDuration = 1000/noteDurations[i];
    tone(8, melody[i], noteDurations[i]);
    noTone(8);
  }
}

else {
  digitalWrite(12, HIGH);
}

Serial.println(analogRead(A1));
}

