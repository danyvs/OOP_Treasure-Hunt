//
// Created by Dany on 13.04.2019.
//

#ifndef OOP_TREASURE_HUNT_ADVENTURER_H
#define OOP_TREASURE_HUNT_ADVENTURER_H

#include <algorithm>
#include <string>
#include "map.h"

using namespace std;

class Adventurer {
protected:
    string name_;
    pair<int, int> position_;
    bool foundATreasure_;
    int rankingPlace_;
public:
    Adventurer(int line, int column, const string& name);
    virtual void move(Map& map, int step) = 0;
    virtual bool canAdventurerMove(Map& map) = 0;
    string getName() const;
    pair<int, int> getPosition() const;
    void setFoundATreasure(bool value);
    bool getFoundATreasure() const;
    void setRankingPlace(int number);
    int getRankingPlace() const;
};

class AdventurerA : public Adventurer {
    const int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    const int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
public:
    AdventurerA(int line, int column, const string& name);
    bool canAdventurerMove(Map& map);
    void move(Map& map, int step);
};

class AdventurerB : public Adventurer {
public:
    AdventurerB(int line, int column, const string& name);
    void move(Map& map, int step);
};

class AdventurerC : public Adventurer {
public:
    AdventurerC(int line, int column, const string& name);
    void move(Map& map, int step);
};

class AdventurerD : public Adventurer {
public:
    AdventurerD(int line, int column, const string& name);
    void move(Map& map, int step);
};

#endif //OOP_TREASURE_HUNT_ADVENTURER_H
