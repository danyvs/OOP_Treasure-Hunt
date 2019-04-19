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
    Adventurer(int line, int column);
    virtual void move(Map& map, int step) = 0;
    bool canAdventurerMove(Map& map);
    std::pair<int, int> getPosition();
};

class AdventurerA : public Adventurer {
public:
    AdventurerA(int line, int column);
    void move(Map& map, int step);
};

class AdventurerB : public Adventurer {
public:
    AdventurerB(int line, int column);
    void move(Map& map, int step);
};

class AdventurerC : public Adventurer {
public:
    AdventurerC(int line, int column);
    void move(Map& map, int step);
};

class AdventurerD : public Adventurer {
public:
    AdventurerD(int line, int column);
    void move(Map& map, int step);
};

#endif //OOP_TREASURE_HUNT_ADVENTURER_H
