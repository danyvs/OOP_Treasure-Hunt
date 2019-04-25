//
// Created by Dany on 14.04.2019.
//

#ifndef OOP_TREASURE_HUNT_GAME_H
#define OOP_TREASURE_HUNT_GAME_H

#include <algorithm>
#include <vector>
#include <deque>
#include "adventurer.h"

using namespace std;

class Game {
    Map map_;
    vector<Adventurer*> adventurers_;
    vector<pair<int, int>> treasures_;
    bool gameFinished_;
    vector<Adventurer*> winningAdventurers_;
    deque<Adventurer*> losingAdventurers_;
public:
    Game(const int& lines, const int& columns);
    void generateTreasures();
    bool isGameFinished() const;

    void playOneRound(int step);
    void playNumberOfRounds(int cntRounds, int step);
    void play();

    void printLeaderborad();
};

#endif //OOP_TREASURE_HUNT_GAME_H
