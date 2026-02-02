/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER

const int RIGHT_MOTOR_BACKWARD = 6;  
const int LEFT_MOTOR_BACKWARD  = 10;  
const int RIGHT_MOTOR_FORWARD  = 5;  
const int LEFT_MOTOR_FORWARD   = 9;  

void initMotorController();
void resetMotors();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);

#endif
