const int MIN_BRIGHTNESS = 0;
const int MAX_BRIGHTNESS = 255;

int led = 9;
int brightness = MIN_BRIGHTNESS;
int fadeStep = 5;


void setup()  {
  pinMode(led, OUTPUT);
} 

void loop()  { 
  analogWrite(led, brightness);    

  brightness = brightness + fadeStep;

  if (!isValidBrightness()) {
    fadeStep = -fadeStep ; 
  }     

  delay(20);       
}

boolean isValidBrightness() {
  return brightness >= MIN_BRIGHTNESS && brightness <= MAX_BRIGHTNESS;
}


