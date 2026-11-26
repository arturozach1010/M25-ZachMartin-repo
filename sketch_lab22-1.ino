//zach was here

#include <Servo.h>

Servo servoRF;
Servo servoRR;
Servo servoLF;
Servo servoLR;

void setup() {
  servoRF.attach(9);
  servoRR.attach(9);
  servoLF.attach(9);
  servoLR.attach(9);
}

void loop() {
  // sweep from 0 to 180 degrees
  for (int pos = 0; pos <= 180; pos++) {
    myservo.write(pos);
    delay(15);
  }

  // sweep from 180 back to 0 degrees
  for (int pos = 180; pos >= 0; pos--) {
    myservo.write(pos);
    delay(15);
  }
}



