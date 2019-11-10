int trigger = 8;
int echo = 9;
double duration = 0;
float distance = 0.0;
 
void setup() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600); //Starts the serial communitcation
}

void loop() {
  
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
}

