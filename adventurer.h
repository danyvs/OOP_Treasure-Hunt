//
// Created by Dany on 13.04.2019.
//

#ifndef OOP_TREASURE_HUNT_ADVENTURER_H
#define OOP_TREASURE_HUNT_ADVENTURER_H

#include <algorithm>
#include "map.h"

class Adventurer {
protected:
    std::pair<int, int> position_;
public:
    virtual void move(Map& map, int step) = 0;
    bool canAdventurerMove(Map& map);
};

class AdventurerA : public Adventurer {
public:
    AdventurerA();
    void move(Map& map, int step);
};

class AdventurerB : public Adventurer {
public:

    void move(Map& map, int step);
};

class AdventurerC : public Adventurer {
public:
    void move(Map& map, int step);
};

class Adventurerd : public Adventurer {
public:
    void move(Map& map, int step);
};

#endif //OOP_TREASURE_HUNT_ADVENTURER_H
