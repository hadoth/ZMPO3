#include <iostream>
#include "Point.h"
#include "Vehicle.h"
#include "Car.h"
#include "Boat.h"
#include "Amphibian.h"

int main() {
    srand(time(NULL));

    srand(static_cast<unsigned int>(time(nullptr)));
    unsigned int n = 10;
    Point points[n];

    for (int i=0; i < n; i++){
        unsigned int distLand = std::rand() / (RAND_MAX/1000);
        unsigned int distWater = std::rand() / (RAND_MAX/1000);
        points[i].setLandDist(distLand);
        points[i].setWaterDist(distWater);
    }

    for (int i=0; i < n; i++){
        std::cout << points[i].getLandDist() << std::endl;
        std::cout << points[i].getWaterDist() << std::endl;
    }

    Vehicle *car = new Car("car");
    std::cout << car->getName() << ": " << car->calculateDist(points, n) << std::endl;
    Vehicle *boat = new Boat("boat");
    std::cout << boat->getName() << ": " << boat->calculateDist(points, n) << std::endl;
    Vehicle *amphibian = new Amphibian("amphibian");
    std::cout << amphibian->getName() << ": " << amphibian->calculateDist(points, n) << std::endl;

    delete(car);
    delete(boat);
    delete(amphibian);

    return 0;
}