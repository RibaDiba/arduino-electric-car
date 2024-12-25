// [dirPin, PWMPin]
int pins[4][2] = {
     //{25,26},
     //{14,12},
     //{16,4},
     //{15,13}
     {17,18},
     {19,26},
     {14,27},
     {12,13}
};

// setup motors 
void setupMotors() {

     int rows = sizeof(pins) / sizeof(pins[0]);     
     int cols = sizeof(pins[0]) / sizeof(pins[0][0]); 

     for (int i = 0; i < rows; i++) {
          for (int j = 0; j < cols; j++) {
               pinMode(pins[i][j], OUTPUT);
          }
     }
}

// this will spin each motor 
void spinEach() {
     for (int i = 0; i < sizeof(pins) / sizeof(pins[0]); i++) {
          analogWrite(pins[i][0], HIGH);
          analogWrite(pins[i][1], 250);

          Serial.println("Testing to motor: ");
          Serial.print(i);

          delay(2000);

          analogWrite(pins[i][1], 0);
     }
}