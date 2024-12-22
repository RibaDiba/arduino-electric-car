#include "setup.h"

void setup(){
    Serial.begin(115200);
    Serial.println("Code has ran");
    debug_magencoders();
}

void loop() {
    // do nothing
}