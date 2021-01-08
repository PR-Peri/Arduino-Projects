//for Line Following Robot using 2IR sensors  
int lm1=8; //left motor output 1
int lm2=9; //left motor output 2
int rm1=10;  //right motor output 1
int rm2=11;  //right motor output 2
int sl=13;    //sensor 1 input (left)
int sr=12;    //sensor 2 input (right)
int SlV=0;
int SrV=0;
int led=A0;
void setup()
{
 pinMode(lm1,OUTPUT);
 pinMode(lm2,OUTPUT);
 pinMode(rm1,OUTPUT);
 pinMode(rm2,OUTPUT);
 pinMode(led,OUTPUT);
 pinMode(sl,INPUT);
 pinMode(sr,INPUT);
sTOP();
}
void loop()
{
 SlV=digitalRead(sl);
 SrV=digitalRead(sr);
 if(SrV==LOW && SlV== LOW)
 {
  ForWard();
   }
 if(SrV==HIGH && SlV== LOW)
 {
  Left();
   }
 if(SrV==LOW && SlV== HIGH)
 { 
 Right();
  }
    if(SrV==HIGH && SlV== HIGH)
 {
  sTOP();
   }
}
void ForWard()
 {
  digitalWrite(lm1,HIGH);
  digitalWrite(lm2,LOW);
  digitalWrite(rm1,HIGH);
  digitalWrite(rm2,LOW);
 } 
 void BackWard()
 {
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,HIGH);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,HIGH);
 }
 void Left()
 {
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,HIGH);
  digitalWrite(rm1,HIGH);
  digitalWrite(rm2,LOW);
 } 
 void Right()
 {
  digitalWrite(lm1,HIGH);
  digitalWrite(lm2,LOW);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,HIGH);
 }  
   void sTOP()
 {
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,LOW);
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,LOW);
 } 
