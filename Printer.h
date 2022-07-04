//
// Created by STASON on 04.07.2022.
//

#ifndef WORKSHOP4_PRINTER_H
#define WORKSHOP4_PRINTER_H
#include "string"
#include "PrintingDevice.h"

using namespace std;
class Printer:public PrintingDevice {
private:
    double weight;
    double color;
    string manufacturer;
};


#endif //WORKSHOP4_PRINTER_H
