//
// Created by Dany on 14.04.2019.
//

#ifndef OOP_TREASURE_HUNT_GAME_H
#define OOP_TREASURE_HUNT_GAME_H

#include <vector>
#include "adventurer.h"

class Game {
    Map map_;
    std::vector<Adventurer*> adventurers_;
public:
    Game(int lines, int columns);
    ~Game();

    void playOneRound(int step);

    void print() {
        map_.printMap();
    }
};

#endif //OOP_TREASURE_HUNT_GAME_H
