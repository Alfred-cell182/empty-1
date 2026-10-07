#include <Arduino.h>

const int LED_PINS[] = {4, 5, 6, 7};  // Exempel – använd dina GPIO.
const int LED_COUNT = 4;
int x=0;

void setup() {
    for (int i = 0; i < LED_COUNT; i++) {pinMode(LED_PINS[i], OUTPUT);}
}

void loop() {
    digitalWrite(LED_PINS[x], HIGH);
    delay(500);
    digitalWrite(LED_PINS[x], LOW);
    delay(500);
    x++;
    if (x==LED_COUNT){
        x=0;
    }
}