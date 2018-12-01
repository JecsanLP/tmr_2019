#include <ArduinoMotorShieldR3.h>

ArduinoMotorShieldR3 motores;

//localizacion de los pines de los sensores
//sensor infrarojo
int s1_ = 49;
int s2_ = 50;
int s3_ = 51;
int s4_ = 53;
int s5_ = 52;


//variables para almacenar los valores
//sensor infrarojo
int s1;
int s2;
int s3;
int s4;
int s5;


int neg = 0;
int bla = 1;

void setup() {
  pinMode( s1_, INPUT );
  pinMode( s2_, INPUT );
  pinMode( s3_, INPUT );
  pinMode( s4_, INPUT );
  pinMode( s5_, INPUT );
}

void loop() {

   //Lectura de los sensores de infrajos
   s5=digitalRead(s5_);
   s4=digitalRead(s4_);
   s3=digitalRead(s3_);
   s2=digitalRead(s2_);
   s1=digitalRead(s1_);


   if(s3 == neg){
     Moverse(100,100);
   }
      
  if(s2 == neg && s1 == neg){
    Moverse(100,-100);
   }
   if(s4 == neg && s5 == neg){
    Moverse(-100,100);
   }
   if(s2 == neg){
    Moverse(100,-50);
   }
   if(s4 == neg){
    Moverse(-50,100);
    }
 
}
   
int Moverse(int velI, int velD){
  motores.setM1Speed(velI);
  motores.setM2Speed(velD);  
}