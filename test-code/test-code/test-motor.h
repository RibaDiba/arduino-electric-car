#include "CytronMotorDriver.h"

// (PWI_DIR, PWM, DIR)
CytronMD motor1(PWM_DIR, 17, 16);
CytronMD motor2(PWM_DIR, 26, 15);
CytronMD motor3(PWM_DIR, 13, 12);
CytronMD motor4(PWM_DIR, 27, 14);

CytronMD motors[] = {motor1, motor2, motor3, motor4};

// this will spin each motor 
void spinEach() {
     for (int i = 0; i < 4; i++) {
          if (i == 0 || i == 1) {
            motors[i].setSpeed(-220);
          } else {
            motors[i].setSpeed(220);  
          }
          \delay(1000); 
          motors[i].setSpeed(0); 
     }
}