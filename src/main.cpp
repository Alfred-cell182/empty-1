#include <Arduino.h>

const unsigned long INTERVAL_MS = 1000;
bool Ligth = true;

bool led_is_on = false;
unsigned long previous_change_time = 0;

const int LED_PINS[] = { 4, 5, 6, 7 };  // Exempel – använd dina GPIO.
const int LED_COUNT = 4;
int x = 0;

void setup() {
    Serial.begin(115200);
  for (int i = 0; i < LED_COUNT; i++) {
    pinMode(LED_PINS[i], OUTPUT);
  }
}

void loop() {
  const unsigned long current_time = millis();
  if (current_time - previous_change_time >= INTERVAL_MS) {
    previous_change_time = current_time;
    digitalWrite(LED_PINS[x],LOW);
    x++;
    if (x == LED_COUNT) {
      x = 0;
    }
    digitalWrite(LED_PINS[x],HIGH);
  }
}