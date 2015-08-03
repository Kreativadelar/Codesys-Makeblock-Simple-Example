/*
**
**  Codesys - Makeblock is a simple example how you can control Makeblock modules
**  from a PLC with Modbus TCP communication. Kreativadelar.se, Sweden
**
**  This code is written "quick & dirty" and should not be as a guide
**  in how to program an Arduino. Feel free to change code as you like
**  and share with your friends.
**
**  If you want to share your code changes, please e-mail them to
**  info@kreativadelar.se and we will put them on our web for other
**  customers to download.
**
**  (C) Kreativadelar.se 2015, Sweden, Patrik
**  http://www.kreativadelar.se
**
**  To use this code you need the following libraries: 
**  
**  Mudbus Library which can be
**  downloaded free from https://code.google.com/p/mudbus/
**  
**  Makeblock Library which can be  
**  downloaded free from https://github.com/Makeblock-official/Makeblock-Library/archive/master.zip
**  
**  We have used the Codesys controller runtime for Raspberry pi for modbus master..
**
**  Version 1.0, Initial public release, July 2015
**
**  This example code is in the public domain.
**
*/

#include <Makeblock.h>
#include <Wire.h>
#include <SoftwareSerial.h>

#include <Ethernet.h>
#include <SPI.h>
#include <Mudbus.h>

Mudbus Mb;
MeLineFollower lineFinder(PORT_8);
MeRGBLed led(PORT_4);

void setup()
{
  delay(2000);

  led.setNumber(15);
  setColor(0,0,0);
  
  byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xEF };  // Define MAC address
  byte ip[] = { 192, 168, 0, 40 };                      // Define IP address
  byte subnet[] = { 255, 255, 255, 0 };                 // Define Subnet mask
  Ethernet.begin(mac, ip, subnet);                      // Assign MAC, IP, and subnet mask
}


void loop()
{
  Mb.Run(); // start MbTcp subroutine
  
  // Set Modbus Coil 0 for line following sensor 1
  if(digitalRead(A0) == 1){
    Mb.C[0] = HIGH;
  }else{
    Mb.C[0] = LOW;
  }

  // Set Modbus Coil 1 for line following sensor 1
  if(digitalRead(A1) == 1){
    Mb.C[1] = HIGH;
  }else{
    Mb.C[1] = LOW;
  }

  for(int i=0; i<15; i++){
    checkLEDs(i);
  }

  led.show();
}

void checkLEDs(int index){
  if(Mb.R[index] == 0){
    led.setColorAt(index, 0,0,0);
  }else if(Mb.R[index] == 1) {
    led.setColorAt(index, 0,255,0);
  }else if(Mb.R[index] == 2) {
    led.setColorAt(index, 255,0,0);
  }else if(Mb.R[index] == 3) {
    led.setColorAt(index, 0,255,255);
  }else if(Mb.R[index] == 4) {
    led.setColorAt(index, 0,0,255);
  }else{
    led.setColorAt(index, 0,0,0);
  }
}

void setColor(uint8_t r, uint8_t g, uint8_t b){
  static int ledCount = 15;
  
  for (uint8_t t = 0; t < ledCount; t++)
  {
    uint8_t red =   r;
    uint8_t green = g;
    uint8_t blue =  b;
    led.setColorAt(t, red,green,blue);
  }
  led.show();
}

