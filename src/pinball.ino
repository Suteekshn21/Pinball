#define bumperCentre A0
#define bumperLeft A1
#define bumperRight A2
#define bumperCentreIn1 5
#define bumperCentreIn2 6
#define bumperLeftIn1 9
#define bumperLeftIn2 10
#define bumperRightIn1 11
#define bumperRightIn2 12
int score=0;

void setup() {
    pinMode(bumperCentre,INPUT_PULLUP);
pinMode(bumperCentreIn1,OUTPUT);
pinMode(bumperCentreIn2,OUTPUT);

   pinMode(bumperLeft,INPUT_PULLUP);
pinMode(bumperLeftIn1,OUTPUT);
pinMode(bumperLeftIn2,OUTPUT);
   pinMode(bumperRight,INPUT_PULLUP);
pinMode(bumperRightIn1,OUTPUT);
pinMode(bumperRightIn2,OUTPUT);
Serial.begin(9600);

}
void bumperCentreStart(){
  digitalWrite(bumperLeftIn1,LOW);
digitalWrite(bumperLeftIn2,LOW);
if (digitalRead(bumperCentre)==LOW){
  delay(5);
  if(digitalRead(bumperCentre)==LOW){
   score++;
  digitalWrite(bumperCentreIn1,HIGH);
  digitalWrite(bumperCentreIn2,LOW);
  delay(200);
    digitalWrite(bumperCentreIn1,LOW);
digitalWrite(bumperCentreIn2,LOW);
  delay (500);
  digitalWrite(bumperCentreIn1,LOW);
  digitalWrite(bumperCentreIn2,HIGH);
    delay(100);
    digitalWrite(bumperCentreIn1,LOW);
digitalWrite(bumperCentreIn2,LOW);
   
Serial.println(score);

  }}
  }



void bumperLeftStart(){
digitalWrite(bumperLeftIn1,LOW);
digitalWrite(bumperLeftIn2,LOW);
if (digitalRead(bumperLeft)==LOW){

  delay(5);
  if (digitalRead(bumperLeft)==LOW){
    score++;
  digitalWrite(bumperLeftIn1,LOW);
  digitalWrite(bumperLeftIn2,HIGH);
  delay (200);
digitalWrite(bumperLeftIn1,LOW);
  digitalWrite(bumperLeftIn2,LOW);
  delay(400);
   
  digitalWrite(bumperLeftIn1,HIGH);
  digitalWrite(bumperLeftIn2,LOW);
  delay(100);
  
  digitalWrite(bumperLeftIn1,LOW);
  digitalWrite(bumperLeftIn2,LOW);
 
Serial.println(score);

}
} 
  

  }

 void bumperRightStart(){
  digitalWrite(bumperRightIn1,LOW);
digitalWrite(bumperRightIn2,LOW);
    if (digitalRead(bumperRight)==LOW){
  delay(5);
  if(digitalRead(bumperRight)==LOW){
    score++;
  digitalWrite(bumperRightIn1,LOW);
  digitalWrite(bumperRightIn2,HIGH);
  delay (200);
digitalWrite(bumperRightIn1,LOW);
  digitalWrite(bumperRightIn2,LOW);
  delay(400);
  

  digitalWrite(bumperRightIn1,HIGH);
  digitalWrite(bumperRightIn2,LOW);
  delay(100);
  
  digitalWrite(bumperRightIn1,LOW);
  digitalWrite(bumperRightIn2,LOW);
 

Serial.println(score);

 }
    }
 }

void loop() {

bumperCentreStart();
bumperRightStart();
bumperLeftStart();

}
