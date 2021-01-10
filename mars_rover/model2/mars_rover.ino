#include <SoftwareSerial.h>

int command;
SoftwareSerial BT(11,10);

#define motora1 24
#define motora2 25

#define motorb1 32
#define motorb2 33

#define motorc1 28
#define motorc2 29

#define motord1 26
#define motord2 27

#define motore1 23
#define motore2 22

#define motorf1 31
#define motorf2 30

void setup() {

  pinMode(motora1, OUTPUT);
  pinMode(motora2, OUTPUT);
  pinMode(motorb1, OUTPUT);
  pinMode(motorb2, OUTPUT);
  pinMode(motorc1, OUTPUT);
  pinMode(motorc2, OUTPUT);
  pinMode(motord1, OUTPUT);
  pinMode(motord2, OUTPUT);
  pinMode(motore1, OUTPUT);
  pinMode(motore2, OUTPUT);
  pinMode(motorf1, OUTPUT);
  pinMode(motorf2, OUTPUT);

  pinMode(13,OUTPUT);

}

void loop() {
  if(BT.available() > 0) {
      command = BT.read();

      Serial.println(command);
      delay(50);

      switch(command) {
        case '1' :
            forward();
            break;

        case '0' :
            freeze();
            break;

        case '2' :
            reverse();
            break;

        case '3' :
            left();
            break;

        case '4' :
            right();
            break;
        }
    }
}

void forward()
{
  digitalWrite(motora1,HIGH);
  digitalWrite(motora2,LOW);

  digitalWrite(motorb1,HIGH);
  digitalWrite(motorb2,LOW);

  digitalWrite(motorc1,HIGH);
  digitalWrite(motorc2,LOW);

  digitalWrite(motord1,HIGH);
  digitalWrite(motord2,LOW);

  digitalWrite(motore1,HIGH);
  digitalWrite(motore2,LOW);
  
  digitalWrite(motorf1,HIGH);
  digitalWrite(motorf2,LOW);  
  }

void reverse()
{
  digitalWrite(motora1,LOW);
  digitalWrite(motora2,HIGH);

  digitalWrite(motorb1,LOW);
  digitalWrite(motorb2,HIGH);

  digitalWrite(motorc1,LOW);
  digitalWrite(motorc2,HIGH);

  digitalWrite(motord1,LOW);
  digitalWrite(motord2,HIGH);

  digitalWrite(motore1,LOW);
  digitalWrite(motore2,HIGH);
  
  digitalWrite(motorf1,LOW);
  digitalWrite(motorf2,HIGH);  
  }

void freeze()
{
  digitalWrite(motora1,LOW);
  digitalWrite(motora2,LOW);

  digitalWrite(motorb1,LOW);
  digitalWrite(motorb2,LOW);

  digitalWrite(motorc1,LOW);
  digitalWrite(motorc2,LOW);

  digitalWrite(motord1,LOW);
  digitalWrite(motord2,LOW);

  digitalWrite(motore1,LOW);
  digitalWrite(motore2,LOW);
  
  digitalWrite(motorf1,LOW);
  digitalWrite(motorf2,LOW);  
  }

void left()
{
  digitalWrite(motora1,HIGH);
  digitalWrite(motora2,LOW);

  digitalWrite(motorb1,LOW);
  digitalWrite(motorb2,HIGH);

  digitalWrite(motorc1,HIGH);
  digitalWrite(motorc2,LOW);

  digitalWrite(motord1,LOW);
  digitalWrite(motord2,HIGH);

  digitalWrite(motore1,HIGH);
  digitalWrite(motore2,LOW);
  
  digitalWrite(motorf1,LOW);
  digitalWrite(motorf2,HIGH);  
  }

void right()
{
  digitalWrite(motora1,LOW);
  digitalWrite(motora2,HIGH);

  digitalWrite(motorb1,HIGH);
  digitalWrite(motorb2,LOW);

  digitalWrite(motorc1,LOW);
  digitalWrite(motorc2,HIGH);

  digitalWrite(motord1,HIGH);
  digitalWrite(motord2,LOW);

  digitalWrite(motore1,LOW);
  digitalWrite(motore2,HIGH);
  
  digitalWrite(motorf1,HIGH);
  digitalWrite(motorf2,LOW);  
  }

