//
// Created by Dany on 14.04.2019.
//

#ifndef OOP_TREASURE_HUNT_GAME_H
#define OOP_TREASURE_HUNT_GAME_H

#include "map.h"

class Game {
    Map map_;
    int currentStep_;
public:
    int getCurrentStep();
    int getContentPositionMap(int line, int column);
};

#endif //OOP_TREASURE_HUNT_GAME_H
