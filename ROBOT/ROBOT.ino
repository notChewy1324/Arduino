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
int RedLight = 10;

void setup() {
pinMode(trigger, OUTPUT);
pinMode(echo, INPUT);
Serial.begin(9600); //Starts the serial communitcation
pinMode(m1, OUTPUT);
pinMode(frontMotor, OUTPUT);
pinMode(m2, OUTPUT);
pinMode(backMotor, OUTPUT);
pinMode(RedLight, OUTPUT);

analogWrite(frontMotor, motorSpeed);
analogWrite(backMotor, motorSpeed);
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
      analogWrite(frontMotor, motorSpeed);
      analogWrite(backMotor, STOP);
      digitalWrite(RedLight, LOW);
      delay(0);
  }else{
      analogWrite(frontMotor, motorSpeed);
      analogWrite(backMotor, motorSpeed);
      digitalWrite(RedLight, HIGH);
    } 
}
