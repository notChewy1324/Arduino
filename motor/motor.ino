int m1 = 12;
int e1 = 3;
int m2 = 13;
int e2 = 11;
int motorSpeed = 255;

void setup() {
pinMode(m1, OUTPUT);
pinMode(e1, OUTPUT);
pinMode(m2, OUTPUT);
pinMode(e2, OUTPUT);

analogWrite(e1, motorSpeed);
analogWrite(e2, motorSpeed);
}

void loop() {
  
}

