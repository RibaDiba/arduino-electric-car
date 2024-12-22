#include "initalize_pins.h"
#include "setup_encoders.h"

void setup() {
    setup_pins();
    debug_magencoders();
}

void loop() {
    // do nothing
    delay(100);
}