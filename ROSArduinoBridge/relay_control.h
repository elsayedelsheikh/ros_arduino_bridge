#ifndef RELAY_CONTROL_H
#define RELAY_CONTROL_H

#ifdef USE_RELAY_CONTROL
  const int relayPin1 = 2;
  const int relayPin2 = 3;

  void initRelays();
  void toggleRelays(bool relay_1, bool relay_2);

#endif  // USE_RELAY_CONTROL

#endif  // RELAY_CONTROL_H