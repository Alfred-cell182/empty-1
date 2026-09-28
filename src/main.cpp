#include <Arduino.h>
  const int LED_PIN = 7;
// put global variables here

void setup() {
    pinMode(LED_PIN, OUTPUT);
  // put your setup code here, to run once
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
    pinMode(LED_PIN, OUTPUT);
  // put your main code here, to run repeatedly
}