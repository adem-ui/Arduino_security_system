#include <Arduino.h>
int pirpin =2; // PIR sensor input pin
int buzzerpin= 9;  // Buzzer output pin

void setup() {
pinMode(pirpin,INPUT);
pinMode(buzzerpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
 int motion = digitalRead(pirpin);
 Serial.println(motion);

 if(motion == HIGH){
  digitalWrite(buzzerpin,HIGH); // Sound the alarm
  delay(1000);  // Delay to simulate alert duration
 }
 else{
  digitalWrite(buzzerpin,LOW);  // Silence the alarm
 }
 delay(200);
 }
  