#include "seg7.h" 
#include "Arduino.h"

int seg7a=13;
int seg7b=12;
int seg7c=11;
int seg7d=10;
int seg7e=9;
int seg7f=8;
int seg7g=7;



seg7::seg7(){
  
    pinMode(seg7a, OUTPUT);
    pinMode(seg7b, OUTPUT);
    pinMode(seg7c, OUTPUT);
    pinMode(seg7d, OUTPUT);
    pinMode(seg7e, OUTPUT);
    pinMode(seg7f, OUTPUT);
    pinMode(seg7g, OUTPUT); 
  
}

seg7::~seg7(){
}

void seg7 :: seg7_yaz(int sayi){
  switch(sayi){
    case 0:
    digitalWrite(seg7a,HIGH);
    digitalWrite(seg7b,HIGH);
    digitalWrite(seg7c,HIGH);
    digitalWrite(seg7d,HIGH);
    digitalWrite(seg7e,HIGH);
    digitalWrite(seg7f,HIGH);
    digitalWrite(seg7g,LOW);
    break;
    case 1:
    digitalWrite(seg7a,LOW);
    digitalWrite(seg7b,HIGH);
    digitalWrite(seg7c,HIGH);
    digitalWrite(seg7d,LOW);
    digitalWrite(seg7e,LOW);
    digitalWrite(seg7f,LOW);
    digitalWrite(seg7g,LOW);

    break;
    case 2:
    digitalWrite(seg7a,HIGH);
    digitalWrite(seg7b,HIGH);
    digitalWrite(seg7c,LOW);
    digitalWrite(seg7d,HIGH);
    digitalWrite(seg7e,HIGH);
    digitalWrite(seg7f,LOW);
    digitalWrite(seg7g,HIGH);

    break;
    case 3:
    digitalWrite(seg7a,HIGH);
    digitalWrite(seg7b,HIGH);
    digitalWrite(seg7c,HIGH);
    digitalWrite(seg7d,HIGH);
    digitalWrite(seg7e,LOW);
    digitalWrite(seg7f,LOW);
    digitalWrite(seg7g,HIGH);

    break;
    case 4:
    digitalWrite(seg7a,LOW);
    digitalWrite(seg7b,HIGH);
    digitalWrite(seg7c,HIGH);
    digitalWrite(seg7d,LOW);
    digitalWrite(seg7e,LOW);
    digitalWrite(seg7f,HIGH);
    digitalWrite(seg7g,HIGH);

    break;
    case 5:
    digitalWrite(seg7a,HIGH);
    digitalWrite(seg7b,LOW);
    digitalWrite(seg7c,HIGH);
    digitalWrite(seg7d,HIGH);
    digitalWrite(seg7e,LOW);
    digitalWrite(seg7f,HIGH);
    digitalWrite(seg7g,HIGH);

    break;
    case 6:
    digitalWrite(seg7a,HIGH);
    digitalWrite(seg7b,LOW);
    digitalWrite(seg7c,HIGH);
    digitalWrite(seg7d,HIGH);
    digitalWrite(seg7e,HIGH);
    digitalWrite(seg7f,HIGH);
    digitalWrite(seg7g,HIGH);
 
    break;
    case 7:
    digitalWrite(seg7a,HIGH);
    digitalWrite(seg7b,HIGH);
    digitalWrite(seg7c,HIGH);
    digitalWrite(seg7d,LOW);
    digitalWrite(seg7e,LOW);
    digitalWrite(seg7f,LOW);
    digitalWrite(seg7g,LOW);

    break;
    case 8:
    digitalWrite(seg7a,HIGH);
    digitalWrite(seg7b,HIGH);
    digitalWrite(seg7c,HIGH);
    digitalWrite(seg7d,HIGH);
    digitalWrite(seg7e,HIGH);
    digitalWrite(seg7f,HIGH);
    digitalWrite(seg7g,HIGH);

    break;
    case 9:
    digitalWrite(seg7a,HIGH);
    digitalWrite(seg7b,HIGH);
    digitalWrite(seg7c,HIGH);
    digitalWrite(seg7d,HIGH);
    digitalWrite(seg7e,LOW);
    digitalWrite(seg7f,HIGH);
    digitalWrite(seg7g,HIGH);

    break;
    
    }
}
