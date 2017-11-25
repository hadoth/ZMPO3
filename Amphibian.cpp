//
// Created by kpokomeda on 25.11.17.
//

#include "Amphibian.h"

Amphibian::Amphibian(char *n) : Car(n), Boat(n), Vehicle(n) {}

unsigned int Amphibian::calculateDist(Point *points, unsigned int pointsCount) {
    unsigned int result = 0;
    for (int i = 0; i < pointsCount; i++) {
        result += points[i].getLandDist() > points[i].getWaterDist() ? points[i].getWaterDist() : points[i].getLandDist();
    }
    return result;
}
