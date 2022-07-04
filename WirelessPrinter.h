//
// Created by STASON on 04.07.2022.
//

#ifndef WORKSHOP4_WIRELESSPRINTER_H
#define WORKSHOP4_WIRELESSPRINTER_H
#include "string"
#include "Printer.h"

using namespace std;
class WirelessPrinter:public Printer {
private:
    double maxDistanceOfConnection;
    int maxUsers;
    int actualUsers;
public:
    void connect(string nameOfComputer, string password);
};


#endif //WORKSHOP4_WIRELESSPRINTER_H
