
int leds[] = {3, 4, 5, 6};
int count = sizeof(leds)/sizeof(leds[0]);

void setup() {
  for(int i = 0; i < count; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void setAll(int state){
  for(int i = 0; i < count; i++){
    digitalWrite(leds[i], state);
  }
}

void loop() {
  for(int n = 0; n < 16; n++) {
    for(int i = 0; i < count; i++){
      digitalWrite(leds[i], (n >> i) & 1);
    }
    delay(800);
  }
  
  for(int i = 0; i < 4; i++) {
    setAll(HIGH);
    delay(300);

    setAll(LOW);
    delay(300);

  }

}

