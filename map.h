//
// Created by Dany on 13.04.2019.
//

#ifndef OOP_TREASURE_HUNT_MAP_H
#define OOP_TREASURE_HUNT_MAP_H

#include <iostream>

class Map {
    int cntLines_, cntColumns_;
    int** content_;
public:
    Map(int lines, int columns);
    //~Map();
    void generateTreasures();
    int getContentPosition(int line, int column);
};

#endif //OOP_TREASURE_HUNT_MAP_H
