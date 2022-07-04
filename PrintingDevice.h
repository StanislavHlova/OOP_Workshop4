//
// Created by STASON on 04.07.2022.
//

#ifndef WORKSHOP4_PRINTINGDEVICE_H
#define WORKSHOP4_PRINTINGDEVICE_H
#include "PoweredDevice.h"
#include "NoisyDevice.h"
#include "string"
using namespace std;
class PrintingDevice: public PoweredDevice, public NoisyDevice{
private:
    string font;
    double sizeOfFont;
    string color;
public:
    virtual void printText(string text);
};


#endif //WORKSHOP4_PRINTINGDEVICE_H
