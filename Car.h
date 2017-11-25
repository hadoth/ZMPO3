//
// Created by kpokomeda on 25.11.17.
//

#ifndef ZMPO3_CAR_H
#define ZMPO3_CAR_H


#include "Vehicle.h"

class Car: public virtual Vehicle {
public:
    Car(char *n);
    virtual unsigned int calculateDist(Point *points, unsigned int pointsCount);
};


#endif //ZMPO3_CAR_H
