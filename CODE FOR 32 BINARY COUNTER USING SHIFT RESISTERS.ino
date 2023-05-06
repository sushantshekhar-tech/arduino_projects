int latchpin=11;
int clockpin=9;
int datapin=12;
int del=1000;

byte LED1=0b00000000;
byte LED2=0b00000001;
byte LED3=0b00000010;
byte LED4=0b00000011;
byte LED5=0b00000100;
byte LED6=0b00000101;
byte LED7=0b00000110;
byte LED8=0b00000111;
byte LED9=0b00001000;
byte LED10=0b00001001;
byte LED11=0b00001010;
byte LED12=0b00001011;
byte LED13=0b00001100;
byte LED14=0b00001101;
byte LED15=0b00001110;
byte LED16=0b00001111;


byte LED17=0b00010001;
byte LED18=0b00100010;
byte LED19=0b00110011;
byte LED20=0b01000100;
byte LED21=0b01010101;
byte LED22=0b01100110;
byte LED23=0b01110111;
byte LED24=0b10001000;
byte LED25=0b10011001;
byte LED26=0b10101010;
byte LED27=0b10111011;
byte LED28=0b11001100;
byte LED29=0b11011101;
byte LED30=0b11101110;
byte LED31=0b11111111;


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

digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED2);
digitalWrite(latchpin,HIGH);
delay(del);

digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED3);
digitalWrite(latchpin,HIGH);
delay(del);


digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED4);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED5);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED6);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED7);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED8);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED9);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED10);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED11);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED12);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED13);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED14);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED15);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED16);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED17);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED18);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED19);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED20);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED21);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED22);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED23);
digitalWrite(latchpin,HIGH);
delay(del);

digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED24);
digitalWrite(latchpin,HIGH);
delay(del);

digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED25);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED26);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED27);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED28);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED29);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED30);
digitalWrite(latchpin,HIGH);
delay(del);
digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,LSBFIRST,LED3);
digitalWrite(latchpin,HIGH);
delay(del);
}
