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
    void printMap() {
        for (int i = 0; i <= cntLines_ + 1; ++i) {
            for (int j = 0; j <= cntColumns_ + 1; ++j)
                std::cout << content_[i][j] << " ";
            std::cout << std::endl;
        }
    }
};

#endif //OOP_TREASURE_HUNT_MAP_H
