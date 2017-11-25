//
// Created by kpokomeda on 25.11.17.
//

#include "Boat.h"

Boat::Boat(char *n) : Vehicle(n) {

}

unsigned int Boat::calculateDist(Point *points, unsigned int pointsCount) {
    unsigned int result = 0;
    for (int i = 0; i < pointsCount; i++) {
        result += points[i].getWaterDist();
    }
    return result;
}