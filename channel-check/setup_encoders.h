#include <Wire.h>
#include <TI_TCA9548A.h>

#define TCAADDR 0x70

bool ifFound[4] = {false, false, false, false};
int highByte = 0;
int lowByte = 0;
int rawAngle = 0;
float degAngle = 0.0;

void tcaselect(uint8_t i) {
    if (i > 7) return;
    Wire.beginTransmission(TCAADDR);
    Wire.write(1 << i);
    Wire.endTransmission();
    Serial.print("Switched to Channel: ");
    Serial.println(i);
}

void debug_magencoders() {
    Serial.println("\nTCAScanner ready!");

    for (uint8_t t = 0; t < 8; t++) {
        tcaselect(t);
        Serial.print("TCA Port #");
        Serial.println(t);

        for (uint8_t addr = 0; addr <= 127; addr++) {
            if (addr == TCAADDR) continue;

            Wire.beginTransmission(addr);
            if (!Wire.endTransmission()) {
                Serial.print("Found I2C 0x");
                Serial.println(addr, HEX);

                ifFound[t] = true;
            }
        }
    }

    for (int i = 0; i < sizeof(ifFound); i++) {
        if (ifFound[i] == true) {
            // do nothing
        } else {
            Serial.println("Unable to Access Encoders");
            return;
        }
    }

    Serial.println("Setup sucessful!");

    return;
}
