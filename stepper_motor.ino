#include <Stepper.h>
int stepsPerRevolution=40;
Stepper myStepper(stepsPerRevolution,8,9,10,11);
int motSpeed=60;
int dt=500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myStepper.setSpeed(motSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
myStepper.step(stepsPerRevolution);
delay(dt);
myStepper.step(-stepsPerRevolution);
delay(dt);
}