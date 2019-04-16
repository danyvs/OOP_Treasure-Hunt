//
// Created by Dany on 14.04.2019.
//

#ifndef OOP_TREASURE_HUNT_GAME_H
#define OOP_TREASURE_HUNT_GAME_H

#include <vector>
#include "adventurer.h"

class Game {
    Map map_;
    int currentStep_;
    std::vector<Adventurer*> adventurers;
public:
    int getCurrentStep();
    // int getContentPositionMap(int line, int column);
    void playOneround();
};

#endif //OOP_TREASURE_HUNT_GAME_H
