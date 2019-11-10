void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void green(int duration){
    digitalWrite(13, HIGH);
    delay(duration);
    digitalWrite(13, LOW);
    delay(100);
}

void yellow(int yellowlight){
    digitalWrite(2, HIGH);
    delay(yellowlight);
    digitalWrite(2, LOW);
    delay(100);
}

void red(int redlight){
    digitalWrite(3, HIGH);
    delay(redlight);
    digitalWrite(3, LOW);
    delay(100);
}

void loop() {
  // FPMSR
red(3000);
yellow(1000);
green(2000);
}

