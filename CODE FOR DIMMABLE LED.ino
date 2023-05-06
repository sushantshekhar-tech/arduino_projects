int readpin=A2;
int readval;
float ledval;
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
ledval=(255./1023.)*readval;
analogWrite(redpin,ledval);
Serial.println(ledval);
delay(del);


}