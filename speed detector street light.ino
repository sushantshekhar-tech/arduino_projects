int ir1=10;
int ir2=8;
int irval1;
int irval2;
double distance=0.16;               //meter
double time1;
double time2;
double time1sec;
double time2sec;
double speed;
int ldrpin=A3;
int ldrval;
int ledpin=11;
void setup() {
  // put your setup code here, to run once:
pinMode(ir1,INPUT);
pinMode(ir2,INPUT);
pinMode(ldrpin,INPUT);
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
irval1=digitalRead(ir1);
irval2=digitalRead(ir2);
ldrval=analogRead(ldrpin);
// delay(500);
// Serial.println(irval1);
// Serial.println(irval2);

if (irval1==0) {
time1=millis();
time1sec=time1/1000;
// Serial.println(time1sec);
// Serial.println(time1);

}

if (irval2==1) {
time2=millis();
time2sec=time2/1000;

// Serial.println(time2sec);
// Serial.println(time2);

}




if (time2sec>time1sec) {
speed=distance*(time2sec-time1sec);
delay(100);
Serial.println(speed);
Serial.println("the speed is in forward direction");
}


if (time1sec>time2sec) {
speed=distance*(time1sec-time2sec);
delay(100);
Serial.println("the speed is in reverse direction");
Serial.println(speed);
}

// delay(200);
// Serial.println(ldrval);

if (ldrval<100 ) {                            //dark
analogWrite(ledpin, 50);
if (speed>0.5 && speed <2) {
analogWrite(ledpin, 255);


}
}

else{                                        //light
analogWrite(ledpin, 0);
}



}
