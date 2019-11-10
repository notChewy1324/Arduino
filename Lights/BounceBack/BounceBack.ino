int red = 10;
int yellow = 11;
int green = 9;
int LightSpeed = 100;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void light1 (int redlight){
  digitalWrite(red, LOW);
  delay(redlight);
  digitalWrite(red, HIGH);
}

void light2 (int yellowlight){
  digitalWrite(yellow, LOW);
  delay(yellowlight);
  digitalWrite(yellow, HIGH);
}

void light3 (int greenlight){
   digitalWrite(green, LOW);
   delay(greenlight);
   digitalWrite(green, HIGH);
}

void loop() {
  light1(LightSpeed);
  light2(LightSpeed);
  light3(LightSpeed);
  light3(LightSpeed);
  light2(LightSpeed);
  light1(LightSpeed);
}
