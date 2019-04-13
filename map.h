//
// Created by Dany on 13.04.2019.
//

#ifndef OOP_TREASURE_HUNT_MAP_H
#define OOP_TREASURE_HUNT_MAP_H

class Map {
    int cntLines, cntColumns;
    int** content_;
public:
    Map();
    void generateTreasures();
};

#endif //OOP_TREASURE_HUNT_MAP_H
