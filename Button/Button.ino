int val = 0;
int pinLed = 10;
int pinButton = 2;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinButton, INPUT);
}

void loop() {
 val = digitalRead(pinButton);
   if(val == HIGH){
      //Turns On
      digitalWrite(pinLed, LOW);
    }else{
        //Turns Off
        digitalWrite(pinLed, HIGH);
      }
}

