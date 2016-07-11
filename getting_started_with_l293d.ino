/*  @Description firmware that controls L293D                               */
/*  @author Aurelio Buarque  (abuarquemf@gmail.com)                                   */
/*  Created on July 11, 2016, 7:37 PM, Seattle-WA, USA                                */

//vector that stores left motor pins
const byte leftMotor[] = {2,3};
//vector that stores right motor pins
const byte rightMotor[] = {4,5};

void setup() {
  //defining motor pins as OUTPUT
  for(int i=0;i<2;i++) {
    pinMode(leftMotor[i], OUTPUT);
    pinMode(rightMotor[i], OUTPUT); 
  }
}

/**
 * This function turns the motors on
 *
*/
void wise(){
  digitalWrite(leftMotor[0], HIGH);
  digitalWrite(leftMotor[1], LOW);
  digitalWrite(rightMotor[0], HIGH);
  digitalWrite(rightMotor[1], LOW);
}

/**
 * This function makes motors run to counter wise
 *
*/
void counterWise() {
  digitalWrite(leftMotor[0], LOW);
  digitalWrite(leftMotor[1], HIGH);
  digitalWrite(rightMotor[0], LOW);
  digitalWrite(rightMotor[1], HIGH);
}

/**
 * This function just stop the motors.
 *
*/
void _stop() {
  for(int i=0;i<2;i++) {
    digitalWrite(leftMotor[i], LOW);
    digitalWrite(rightMotor[i], LOW); 
  }
}

void loop() {
  //run motors in one wise
  wise();
  //delay 3 seconds
  delay(3000);
  //put them off
  _stop();
  //delay 3 seconds
  delay(3000);
  //turn them againg to another wise
  counterWise();
}
