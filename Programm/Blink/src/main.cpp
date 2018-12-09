#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(500);
  pinMode(4,OUTPUT);
}

void loop() {
  digitalWrite(4,HIGH);
  Serial.println("ON"); 
  delay(500);
  digitalWrite(4,LOW);
  Serial.println("OFF");
  delay(500);
}