//
// Created by kpokomeda on 25.11.17.
//

#ifndef ZMPO3_VEHICLE_H
#define ZMPO3_VEHICLE_H


#include "Point.h"

class Vehicle {
private:
    char *name;
public:
    Vehicle(char *n) : name(n) {};
    virtual ~Vehicle(){};
    inline char *getName() { return this->name; }
    virtual unsigned int calculateDist(Point *points, unsigned int pointsCount) = 0;
};


#endif //ZMPO3_VEHICLE_H
