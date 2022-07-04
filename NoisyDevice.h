//
// Created by STASON on 04.07.2022.
//

#ifndef WORKSHOP4_NOISYDEVICE_H
#define WORKSHOP4_NOISYDEVICE_H


class NoisyDevice {
private:
    double frequencyOfNoise;
    double volumeOfNoise;
    double amplitudeOfNoise;
public:
    virtual void makeNoise();
};


#endif //WORKSHOP4_NOISYDEVICE_H
