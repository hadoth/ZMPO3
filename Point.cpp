//
// Created by kpokomeda on 25.11.17.
//

#include "Point.h"

unsigned int Point::getLandDist() const {
    return landDist;
}

unsigned int Point::getWaterDist() const {
    return waterDist;
}

void Point::setWaterDist(unsigned int waterDist) {
    Point::waterDist = waterDist;
}

void Point::setLandDist(unsigned int landDist) {
    Point::landDist = landDist;
}
