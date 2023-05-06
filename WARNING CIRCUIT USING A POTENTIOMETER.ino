int readpin=A2;
int readval;
float V2;
int del=500;
int redpin=9;



void setup() {
  pinMode(readpin,INPUT);
  pinMode(readpin,OUTPUT);

  // put your setup code here, to run once:
Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
readval=analogRead(readpin);
V2=(5./1023.)*readval;
Serial.println("My potentiometer voltage is ");
Serial.println(V2);
delay(del);

if(V2>4.0){

  digitalWrite(redpin,HIGH);
}
if(V2<4.0){
  digitalWrite(redpin,LOW);
}
}