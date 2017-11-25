//
// Created by kpokomeda on 25.11.17.
//

#include "Car.h"

Car::Car(char *n) : Vehicle(n) {

}

unsigned int Car::calculateDist(Point *points, unsigned int pointsCount) {
    unsigned int result = 0;
    for (int i = 0; i < pointsCount; i++) {
        result += points[i].getLandDist();
    }
    return result;
}

