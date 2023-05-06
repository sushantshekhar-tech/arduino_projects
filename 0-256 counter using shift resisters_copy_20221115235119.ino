int latchpin=11;
int clockpin=9;
int datapin=12;
int del=1000;

byte LED1=0b00000000;

void setup() {
  // put your setup code here, to run once:

pinMode(latchpin,OUTPUT);
pinMode(clockpin,OUTPUT);
pinMode(datapin,OUTPUT);


}
void loop() {
  // put your main code here, to run repeatedly:
Serial.begin(9600);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED1);
digitalWrite(latchpin,HIGH);
delay(del);

Serial.println(LED1 ,BIN);
LED1=LED1+1;




}
