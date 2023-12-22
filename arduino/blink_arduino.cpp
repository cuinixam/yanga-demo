#include <Arduino.h>
#include "blink.h"

void setup();
void loop();
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

Blink blink(1000);

void loop() {
    Blink::BlinkState state = blink.get_state();
    if (state == Blink::ON)
    {
        digitalWrite(LED_BUILTIN, HIGH);
    }
    else
    {
        digitalWrite(LED_BUILTIN, LOW);
    }
    delay(1);
}

