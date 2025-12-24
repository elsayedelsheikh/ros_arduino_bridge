/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
   
   
#ifdef ARDUINO_ENC_COUNTER
  //below can be changed, but should be PORTD pins; 
  #define LEFT_ENC_PIN_A PD2  //pin 2
  
  //below can be changed, but should be PORTC pins
  #define RIGHT_ENC_PIN_A PC4  //pin A4

  // Direction flags for encoder counting
  volatile bool left_motor_reverse = false;
  volatile bool right_motor_reverse = false;

#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();

