//
// Created by Dany on 13.04.2019.
//

#ifndef OOP_TREASURE_HUNT_ADVENTURER_H
#define OOP_TREASURE_HUNT_ADVENTURER_H

#include <algorithm>
#include "game.h"

class Adventurer {
protected:
    std::pair<int, int> position_;
public:
    virtual void move(Game& game) = 0;
};

class AdventurerA : public Adventurer {
    void move(Game& game);
};

class AdventurerB : public Adventurer {
    void move(Game& game);
};

class AdventurerC : public Adventurer {
    void move(Game& game);
};

class AdventurerD : public Adventurer {
    void move(Game& game);
};

#endif //OOP_TREASURE_HUNT_ADVENTURER_H
