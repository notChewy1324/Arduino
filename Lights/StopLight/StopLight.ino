int red = 10;
int yellow = 11;
int green = 9;
int greenlight_Time = 2000;
int yellowlight_Time = 3000;
int redlight_Time = 5000;
int delay1 = 100;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void redLed (int redlight){
    digitalWrite(red, LOW);
    delay(redlight);
    digitalWrite(red, HIGH);
    delay(delay1);
}

void yellowLed (int yellowlight){
    digitalWrite(yellow, LOW);
    delay(yellowlight);
    digitalWrite(yellow, HIGH);
    delay(delay1);
}

void greenLed (int greenlight){
    digitalWrite(green, LOW);
    delay(greenlight);
    digitalWrite(green, HIGH);
    delay(1000);
}

void loop() {
  redLed(redlight_Time);
  yellowLed(yellowlight_Time);
  greenLed(greenlight_Time);
}
