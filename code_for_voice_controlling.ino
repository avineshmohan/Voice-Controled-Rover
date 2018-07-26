#include <BitVoicer11.h>
BitVoicerSerial bvSerial = BitVoicerSerial();
byte datatype = 4;
int leftmotor1=5;
int leftmotor2=6;
int rightmotor1=10;
int rightmotor2=11;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
   pinMode(leftmotor1,OUTPUT);
   pinMode(leftmotor2,OUTPUT);
   pinMode(rightmotor1,OUTPUT);
   pinMode(rightmotor2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
 void serialEvent()
{
  datatype = bvSerial.getData();
  int input = bvSerial.intData;
  
  if (datatype ==  BV_STR)
 {
    
    if ((bvSerial.strData) == "go forward")
   {
      digitalWrite(leftmotor1, HIGH);
      digitalWrite(leftmotor2,LOW);
      digitalWrite(rightmotor1, HIGH);
      digitalWrite(rightmotor2, LOW);
   }
 }
 }
