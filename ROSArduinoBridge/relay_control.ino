#ifdef USE_RELAY_CONTROL

void initRelays() {
  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
}

void toggleRelays(bool relay_1, bool relay_2) {
  digitalWrite(relayPin1, relay_1);
  digitalWrite(relayPin2, relay_2);
}

#endif // USE_RELAY_CONTROL