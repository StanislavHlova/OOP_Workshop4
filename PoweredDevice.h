//
// Created by STASON on 04.07.2022.
//

#ifndef WORKSHOP4_POWEREDDEVICE_H
#define WORKSHOP4_POWEREDDEVICE_H


class PoweredDevice {
private:
    double voltage;
    double ampers;
    double frequency;
public:
    virtual void turnOn();
    virtual void turnOff();
    virtual bool isTurned();
};


#endif //WORKSHOP4_POWEREDDEVICE_H
