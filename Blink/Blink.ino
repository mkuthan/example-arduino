int led = 13;

void setup() {                
  pinMode(led, OUTPUT);     
}

void loop() {
  int current = digitalRead(led);
  int next = (current == HIGH) ? LOW : HIGH;
  digitalWrite(led, next);
  delay(250);
}
