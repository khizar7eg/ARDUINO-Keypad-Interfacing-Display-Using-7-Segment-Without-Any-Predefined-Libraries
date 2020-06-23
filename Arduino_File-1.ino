// Khizar Hayat 
// GitHub (khizar7eg)

#define segA 7 // Connecting Segment A to PIN 7.
#define segB 8 // Connecting Segment B to PIN 8.
#define segC 9 // Connecting Segment C to PIN 9.
#define segD 10 // Connecting Segment D to PIN 10.
#define segE 11 // Connecting Segment E to PIN 11.
#define segF 12 // Connecting Segment F to PIN 12.
#define segG 13 // Connecting Segment G to PIN 13.
#define Row4 0 // Connecting Keypad Row4 to PIN 0.
#define Row3 1 // Connecting Keypad Row3 to PIN 1.
#define Row2 2 // Connecting Keypad Row2 to PIN 2.
#define Row1 3 // Connecting Keypad Row1 to PIN 3.
#define Col1 4 // Connecting Keypad Column1 to PIN 4.
#define Col2 5 // Connecting Keypad Column2 to PIN 5.
#define Col3 6 // Connecting Keypad Column3 to PIN 6.

int COL1,COL2,COL3;
int ROW1,ROW2,ROW3,ROW4;
int del=600;

void setup()
{

for (int i=7;i<14;i++)
{
pinMode(i,OUTPUT);
// Taking all Pins from 7-13 as OUTPUT for 7SEGMENT.
}
for (int i=4;i<7;i++)
{
pinMode(i,OUTPUT);
// Taking all Pins from 4-7 as OUTPUT for KEYPAD.
}
for (int i=0;i<4;i++)
{
pinMode(i,OUTPUT);
// Taking all Pins from 0-3 as OUTPUT for KEYPAD.
}


}
void loop()
{
  r1();
  r2();
  r3();
  r4(); 
}

void r1() {

  digitalWrite(Row1, HIGH);
  digitalWrite(Row2, LOW);
  digitalWrite(Row3, LOW);
  digitalWrite(Row4, LOW);


  if (digitalRead(Col1) == HIGH) {
digitalWrite(segA, LOW);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);   
delay(del);
  }
  else if (digitalRead(Col2) == HIGH) {
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, LOW);
digitalWrite(segD,HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, LOW);
digitalWrite(segG, HIGH);
delay(del);
  }
  else if (digitalRead(Col3) == HIGH) {
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, HIGH);
delay(del);
  }

}


void r2() {

  digitalWrite(Row1, LOW);
  digitalWrite(Row2, HIGH);
  digitalWrite(Row3, LOW);
  digitalWrite(Row4, LOW);


  if (digitalRead(Col1) == HIGH) {
digitalWrite(segA, LOW);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);  
delay(del);
  }
  else if (digitalRead(Col2) == HIGH) {
digitalWrite(segA, HIGH);
digitalWrite(segB, LOW);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, LOW);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);
delay(del);
  }
  else if (digitalRead(Col3) == HIGH) {
digitalWrite(segA, HIGH);
digitalWrite(segB, LOW);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);
delay(del);
  }

}

void r3() {

  digitalWrite(Row1, LOW);
  digitalWrite(Row2, LOW);
  digitalWrite(Row3, HIGH);
  digitalWrite(Row4, LOW);


  if (digitalRead(Col1) == HIGH) {
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW); 
delay(del);
  }
  else if (digitalRead(Col2) == HIGH) {
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);
delay(del);
  }
  else if (digitalRead(Col3) == HIGH) {
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, LOW);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);
delay(del);
  }

}

void r4() {

  digitalWrite(Row1, LOW);
  digitalWrite(Row2, LOW);
  digitalWrite(Row3, LOW);
  digitalWrite(Row4, HIGH);

  if (digitalRead(Col1) == HIGH) {
digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
delay(del);
  }
  else if (digitalRead(Col2) == HIGH) {
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, LOW);
delay(del);
  }
  else if (digitalRead(Col3) == HIGH) {
digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
delay(del);
  }
 
}
