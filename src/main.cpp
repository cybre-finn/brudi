#include <Arduino.h>

void setup() {
  pinMode(D1, INPUT);
  pinMode(D2, OUTPUT); //Actually Output pin but INPUT as High-Z mode    
  digitalWrite(D2, HIGH);
}

void loop() {
  int k=0;
  while(true) {
    while(digitalRead(D1)!=LOW);
    digitalWrite(D2, LOW);
    delay(3.3);
    digitalWrite(D2, HIGH);
    k++;
    if(k>50) break;
  }
  delay(2000);
}

