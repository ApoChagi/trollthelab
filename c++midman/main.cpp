#include<iostream>
using namespace std;
#include<string>
#include<stdlib.h>
//#include"serial.hpp"
#include "processor.hpp"
#define MAX_DATA_LENGTH 3

//char output[MAX_DATA_LENGTH];
char incomingData[MAX_DATA_LENGTH];
int output;

// change the name of the port with the port name of your computer
// must remember that the backslashes are essential so do not remove them
char *port = "\\\\.\\COM3";

processor humpro;

void getrequest(processor p){
  printf("TEST OK\n");  
}

int main(){
	/*SerialPort arduino(port);
	if(arduino.isConnected()){
		cout<<"Connection made"<<endl<<endl;
	}
	else{
		cout<<"Error in port name"<<endl<<endl;
	}*/
	while(true){//arduino.isConnected()){
	  /*cout<<"Enter your command: "<<endl;
		string data;
		cin>>data;

		char *charArray = new char[data.size() + 1];
		copy(data.begin(), data.end(), charArray);
		charArray[data.size()] = '\n';

		arduino.writeSerialPort(charArray, MAX_DATA_LENGTH);
		arduino.readSerialPort(output, MAX_DATA_LENGTH);*/
    if(getchar()=='1')break;
    output=82;
    humpro.newinfo(output);

    getrequest(humpro);

		//cout<<">> "<<output<<endl;

		//delete [] charArray;
	}
	return 0;
}
