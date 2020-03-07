#define ARDUINO_WAIT_TIME 1000
#define MAX_DATA_LENGHT 255

#pragma once

#include <windows.h>
#include <iostream>

class SerialPort{
  private:
    HANDLE handler;
    bool connected;
    COMSTAT status;
    DWORD errors;
  public:
    explicit SerialPort(const char *portName);
    ~SerialPort();

    int readSerialPort(const char *buffer, unsigned int buf_size);
    bool writeSerialPort(const char *buffer, int buf_size);
    bool isConnected();
    void closeSerial();
};