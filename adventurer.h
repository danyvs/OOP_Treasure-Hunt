//
// Created by Dany on 13.04.2019.
//

#ifndef OOP_TREASURE_HUNT_ADVENTURER_H
#define OOP_TREASURE_HUNT_ADVENTURER_H

#include <algorithm>

class Adventurer {
    std::pair<int, int> position;
public:
    virtual void move() = 0;
};

class AdventurerA : public Adventurer {

};

class AdventurerB : public Adventurer {

};

class AdventurerC : public Adventurer {

};

class AdventurerD : public Adventurer {

};

#endif //OOP_TREASURE_HUNT_ADVENTURER_H
