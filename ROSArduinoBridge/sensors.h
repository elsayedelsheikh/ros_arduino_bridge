/* Functions for various sensor types */
const int ULTRA_SONIC_TRIG_PIN = 7;  
const int ULTRA_SONIC_ECHO_PIN = 8;  

void initUltraSonicPins() {
  pinMode(ULTRA_SONIC_TRIG_PIN, OUTPUT);
  pinMode(ULTRA_SONIC_ECHO_PIN, INPUT);
}

float microsecondsToCm(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per cm.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
}

long Ping() {
  long duration, range;

  // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(ULTRA_SONIC_TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(ULTRA_SONIC_TRIG_PIN, HIGH);
  delayMicroseconds(5);
  digitalWrite(ULTRA_SONIC_TRIG_PIN, LOW);

  // The pin is used to read the signal from the PING))): a HIGH
  // pulse whose duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  duration = pulseIn(ULTRA_SONIC_ECHO_PIN, HIGH);

  // convert the time into meters
  range = microsecondsToCm(duration);
  
  return(range);
}

