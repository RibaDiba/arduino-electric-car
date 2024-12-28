#include <CytronMD.h>

// (PWI_DIR, PWM, DIR)
CytronMD motor1(PWM_DIR, 17, 16);
CytronMD motor2(PWM_DIR, 26, 15);
CytronMD motor3(PWM_DIR, 13, 12);
CytronMD motor4(PWM_DIR, 27, 14);

CytronMD motors[] = {motor1, motor2, motor3, motor4};

void setup() {
    Serial.begin(115200);
}

void loop() {
    motors[0].setSpeed(100);
    motors[1].setSpeed(-100);

    motors[2].setSpeed(-100);
    motors[3].setSpeed(100);

    delay(5000);

    motors[0].setSpeed(-100);
    motors[1].setSpeed(100);

    motors[2].setSpeed(100);
    motors[3].setSpeed(-100);

    delay(5000);

}