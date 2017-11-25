//
// Created by kpokomeda on 25.11.17.
//

#ifndef ZMPO3_BOAT_H
#define ZMPO3_BOAT_H


#include "Vehicle.h"

class Boat: public virtual Vehicle {
public:
    Boat(char *n);
    virtual unsigned int calculateDist(Point *points, unsigned int pointsCount);
};


#endif //ZMPO3_BOAT_H
