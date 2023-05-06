
const int pingPin = D5; // Trigger Pin of Ultrasonic Sensor
const int echoPin = D6; // Echo Pin of Ultrasonic Sensor
int led1 = D0;
int led2 = D1;
int led3 = D2;
//int led4 = 9;

float lvl1=2;
float lvl2=4;
float lvl3=6;
float lvl4=8;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  //pinMode(led4, OUTPUT);
   Serial.begin(9600); // Starting Serial Terminal
}

void loop() {


   long duration, inches, cm;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   inches = microsecondsToInches(duration);
   cm = microsecondsToCentimeters(duration);
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(100);

if(cm<6.75){
   digitalWrite(led1,HIGH); 
   digitalWrite(led2,HIGH);  
   digitalWrite(led3,HIGH); 
   //digitalWrite(led4,HIGH);
}

else if((cm>6.75)&&(cm<13.75)){
   digitalWrite(led1,LOW); 
   digitalWrite(led2,HIGH);  
   digitalWrite(led3,HIGH); 
   digitalWrite(led4,HIGH);
}

else if((cm>13.75)&&(cm<20.5) ){
   digitalWrite(led1,LOW); 
   digitalWrite(led2,LOW);  
   digitalWrite(led3,HIGH); 
   digitalWrite(led4,HIGH);
}

else if(cm>20.5 ){
   digitalWrite(led1,LOW); 
   digitalWrite(led2,LOW);  
   digitalWrite(led3,LOW); 
   digitalWrite(led4,HIGH);
}


}







long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}