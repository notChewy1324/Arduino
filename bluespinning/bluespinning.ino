//Values
int val2 = 0;
int val = 0;
int LED = 3;
int Spinning = A0;

//PIN-INPUTS
void setup() {
  pinMode(Spinning, INPUT);
  pinMode(LED, OUTPUT);
}

//LIGHT
void loop() {
  val = analogRead(Spinning);
  val2 = map(val, 0,1023, 0,255);
  analogWrite(LED, val2);
}

