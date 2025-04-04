#include "BluetoothSerial.h"
#include <Arduino.h>
//#include <ESP32Servo.h>
BluetoothSerial serialBT;

//Bluetooth signal Store in this variable
char data;
//Servo myservo;
const int r=33;
int v=0;

//MOTOR LEFT
int enB = 25;
int in4 = 26;
int in3 = 27;

//MOTOR RIGHT
int enA = 13;
int in1 = 12;
int in2 = 14;

//BUZZ
int buzz=11;

void setup() {
  Serial.begin(115200);
  //Bluetooth Name
  serialBT.begin("Nirupam Ghosh");
  //myservo.attach(33);
  //output pin declare
  pinMode(enB, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void FORWARD()
{
  analogWrite(enA, 150);
  analogWrite(enB, 150);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW); 
}

void BACKWARD()
{
  analogWrite(enA, 150);
  analogWrite(enB, 150);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); 
}

void RIGHT()
{
  analogWrite(enA, 150);
  analogWrite(enB, 150);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH); 
}

void LEFT()
{
  analogWrite(enA, 150);
  analogWrite(enB, 150);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW); 
}

void STOP()
{

  digitalWrite(in4, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);  
}
void loop() 
{
  v=analogRead(r);
  //Serial.println(v);
  while (serialBT.available()) {
    data = serialBT.read();
    Serial.println(data);
    if(data=='F')
    {                           
         FORWARD();
    }
    if(data=='B')
    {                           
         BACKWARD();
    }
    if(data=='R')
    {                           
         RIGHT();
    }
    if(data=='L')
    {                           
         LEFT();
    }
    if(data=='S')
    {                           
         STOP();
    }
    }
}
