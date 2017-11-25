//
// Created by kpokomeda on 25.11.17.
//

#ifndef ZMPO3_POINT_H
#define ZMPO3_POINT_H


class Point {
private:
    unsigned int landDist;
    unsigned int waterDist;
public:
    unsigned int getLandDist() const;

    void setLandDist(unsigned int landDist);

    unsigned int getWaterDist() const;

    void setWaterDist(unsigned int waterDist);
};


#endif //ZMPO3_POINT_H
