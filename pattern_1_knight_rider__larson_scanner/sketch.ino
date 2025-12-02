
int leds[] = {3, 4, 5, 6};
int count = sizeof(leds)/sizeof(leds[0]);

void setup() {
  for(int i = 0; i < count; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for(int i = 0; i < count; i++) {
    digitalWrite(leds[i], HIGH);
    delay(500);
    digitalWrite(leds[i], LOW);
    delay(500);
  }

  for (int i = count - 2; i > 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
  }
}

