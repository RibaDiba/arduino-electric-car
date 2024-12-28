#include "setup.h"
#include "test-motor.h"

void setup(){
    Serial.begin(115200);
    Serial.println("Code has ran");
    debug_magencoders();
    analogWrite(13, LOW);
}

void loop() {
    // do nothing
    // spinEach();
    delay(100);
}