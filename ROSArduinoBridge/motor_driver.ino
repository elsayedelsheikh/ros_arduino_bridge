/***************************************************************
   Motor driver definitions

   Add a "#elif defined" block to this file to include support
   for a particular motor driver.  Then add the appropriate
   #define near the top of the main ROSArduinoBridge.ino file.

   *************************************************************/

#ifdef USE_BASE
#ifdef L298_BRIDGE

void initMotorController() {
  pinMode(LFWD_MOTOR, OUTPUT);
  pinMode(LBWD_MOTOR, OUTPUT);
  pinMode(RFWD_MOTOR, OUTPUT);
  pinMode(RBWD_MOTOR, OUTPUT);
  resetMotors();
}

void resetMotors() {
  digitalWrite(LFWD_MOTOR, LOW);
  digitalWrite(LBWD_MOTOR, LOW);
  digitalWrite(RFWD_MOTOR, LOW);
  digitalWrite(RBWD_MOTOR, LOW);
}

void setMotorSpeed(int i, int spd) {
  unsigned char reverse = 0;

  if (spd < 0) {
    spd = -spd;
    reverse = 1;
  }

  if (spd > motorMaxPWM) spd = motorMaxPWM;

  if (i == LEFT) {
    if (reverse == 0) {
      analogWrite(LFWD_MOTOR, spd);
      digitalWrite(LBWD_MOTOR, LOW);

    } else if (reverse == 1) {
      analogWrite(LBWD_MOTOR, spd);
      digitalWrite(LFWD_MOTOR, LOW);
    }
  } else if (i == RIGHT) {
    if (reverse == 0) {
      analogWrite(RFWD_MOTOR, spd);
      digitalWrite(RBWD_MOTOR, LOW);
    } else if (reverse == 1) {
      analogWrite(RBWD_MOTOR, spd);
      digitalWrite(RFWD_MOTOR, LOW);
    }
  }
}

void setMotorSpeeds(int leftSpeed, int rightSpeed) {
  setMotorSpeed(LEFT, leftSpeed);
  setMotorSpeed(RIGHT, rightSpeed);
}

#else
#error A motor driver must be selected!
#endif

#endif
