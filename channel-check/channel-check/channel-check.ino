#include "initalize_pins.h"
#include "setup_encoders.h"

void setup() {
    Serial.begin(9600);
    while (!Serial) {
        ;
    }
    // setup_pins();
    // debug_magencoders();
    Serial.println("Enter numbers to debug encoders. Enter 0 to stop.");
}

void loop() {
    prompt_user();
    delay(100);
}

void prompt_user() {
    if (Serial.available() > 0) {
        String input = Serial.readStringUntil('\n');
        input.trim();

        int number = input.toInt();

        if (number == 0) {
            Serial.println("Exiting debug mode.");
            return;
        }

        debug_magencoders();
        Serial.println("Debugging encoders...");
    }
}
