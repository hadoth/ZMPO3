//
// Created by kpokomeda on 25.11.17.
//

#ifndef ZMPO3_AMPHIBIAN_H
#define ZMPO3_AMPHIBIAN_H


#include "Car.h"
#include "Boat.h"

class Amphibian: public Car, public Boat {
public:
    Amphibian(char *n);
    virtual unsigned int calculateDist(Point *points, unsigned int pointsCount);
};


#endif //ZMPO3_AMPHIBIAN_H
