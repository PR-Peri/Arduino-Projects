#include <Ultrasonic.h>
Ultrasonic ultrasonic(6,5);// 6 trig , 5 echo


const int buzzer = 7; // pin buzzer

void setup(){
 pinMode(buzzer,OUTPUT);

}

void loop(){
 int dist = ultrasonic.Ranging(CM);
if (dist < 100) {
  tone(buzzer,1000);
     delay(40);
   noTone(buzzer);
     delay(dist*4);
   }
 delay(100); 
} 
