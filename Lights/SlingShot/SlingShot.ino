int red = 10;
int yellow = 11;
int green = 9;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void middleLight(int yellowlight){
  digitalWrite(yellow, LOW);
  delay(yellowlight);
  digitalWrite(yellow, HIGH);
}

void rightLight(int redlight){
  digitalWrite(red, LOW);
  delay(redlight);
  digitalWrite(red, HIGH);
}

void leftLight(int greenlight){
  digitalWrite(green, LOW);
  delay(greenlight);
  digitalWrite(green, HIGH);
  delay(1000);
}


void loop() {
  middleLight(2000);
  rightLight(1000);
  middleLight(10);
  leftLight(100);
}
