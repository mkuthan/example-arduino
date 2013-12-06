int pushButton = 2;
int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(pushButton);
  int ledState = (buttonState == 1) ? HIGH : LOW;
  digitalWrite(led, ledState);
}



