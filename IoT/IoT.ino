int RedLight = 10;
int m1 = 12;
int frontMotor = 3;
int m2 = 13;
int backMotor = 11;
int motorSpeed = 255; //Speed of the rover 0 - 255
int motorBack = -255; //Reverse the direction of the rover 0 - 255
int trigger = 8;
int echo = 9;
double duration = 0;
float distance = 0.0;
int STOP = 0;

void setup() {
  pinMode(RedLight, OUTPUT);
  pinMode(m1, OUTPUT);
pinMode(frontMotor, OUTPUT);
pinMode(m2, OUTPUT);
pinMode(backMotor, OUTPUT);
pinMode(trigger, OUTPUT);
pinMode(echo, INPUT);
Serial.begin(9600); //Starts the serial communitcation
}

void REDLED(int REDLEDLIGHT){
  digitalWrite(RedLight, HIGH);
  delay(REDLEDLIGHT);
  digitalWrite(RedLight, LOW);
  delay(REDLEDLIGHT);
}

void loop() {
    //SENSOR START
  //Initalize Trigger Pin
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  
  //Fire my trigger Pin for 10 microseconds
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  //Reads echo, returns the sound wave travel time in microseconds
  duration = pulseIn(echo, HIGH);

  //Calculating the distance
  distance = duration/58;

  //Prints the distance to the Serial Monitor
  Serial.print("Distance in cm: "); 
  Serial.println(distance);
  //SENSOR END

  if(distance <= 40){
      analogWrite(frontMotor, STOP);
      analogWrite(backMotor, STOP);
      delay(2000);
  }else{
      analogWrite(frontMotor, motorSpeed);
      analogWrite(backMotor, motorSpeed);
    } 
  REDLED(300);
  digitalWrite(RedLight, LOW);
analogWrite(frontMotor, motorSpeed);
analogWrite(backMotor, motorSpeed);
}
