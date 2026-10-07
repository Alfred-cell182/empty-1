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
    if (Ligth == false) {
      digitalWrite(LED_PINS[x], HIGH);
      Serial.println("loop 1");
      Ligth = true;
      x++;
    } else if (Ligth == true) {
      digitalWrite(LED_PINS[x], LOW);
      Serial.println("loop 2");
      Ligth = false;
      x++;
    }
    if (x == LED_COUNT) {
      x = 0;
    }
    
  }
  delay(10);
}
