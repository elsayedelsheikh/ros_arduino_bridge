#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H

#ifdef L298_BRIDGE

int LFWD_MOTOR = 5;  // D5
int LBWD_MOTOR = 6;  // D6
int RFWD_MOTOR = 9;  // D9
int RBWD_MOTOR = 10;  // D10

int motorMaxPWM = 150;

void initMotorController();
void resetMotors();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);

#endif  // L298_SHEILD_MOTOR_DRIVER
#endif  // MOTOR_DRIVER_H