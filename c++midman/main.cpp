#define MAXLENGHT 255

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "SerialPort.hpp"

using namespace std;

char *portname="\\\\.\\COM5";
char incomingData[maxlenght];
char ledON[]="ON\n";
char ledOFF[]="OFF\n";

SerialPort *arduino;

const int delay=1000;

void receive(){
  int readRes=arduino->readSerialPort(incomingData, maxlenght);
  printf("%s", incomingData);
  Sleep(10);
}
void write(unsigned int delay){}
  arduino->writeSerialPort(ledON, MAXLENGHT);
  Sleep(delay);
  arduino->writeSerialPort(ledOFF, MAXLENGHT);
}
void connect(){
  while(!arduino->isConnected()){
    Sleep(100);
    arduino=new SerialPort(portname);
    if(arduino->isConnected())cout<<"is connected"<<endl;
    while(arduino->isConnected())write(delay);
    while(arduino->isConnected())receive();
    connect();
  }
}
int main(){
  arduino=new SerialPort(portname);

  connect();
}