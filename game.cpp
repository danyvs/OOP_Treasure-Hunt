//
// Created by Dany on 14.04.2019.
//

#include <cstdlib>
#include <time.h>
#include "game.h"

/**
 *  Constructor for class Game
 * @param lines
 * @param columns
 */
Game::Game(int lines, int columns) : map_(lines, columns) {
    adventurers_.push_back(new AdventurerA(1, 1));
    map_.setContentPosition(1, 1, 1);

    // adventurers_.push_back(new AdventurerB(1, map_.getCntColumns()));
    map_.setContentPosition(1, map_.getCntColumns(), 1);

    // adventurers_.push_back(new AdventurerC(map_.getCntColumns(), 1));
    map_.setContentPosition(map_.getCntColumns(), 1, 1);

    // adventurers_.push_back(new AdventurerD(map_.getCntColumns(), map_.getCntColumns()));
    map_.setContentPosition(map_.getCntColumns(), map_.getCntColumns(), 1);
}

/**
 *  Destructor for class Game
 */
Game::~Game() {

}

/**
 *  Generate positions for the treasures
 */
void Game::generateTreasures() {
    srand(time(nullptr));
    int cntLines = map_.getCntLines();
    int cntColumns = map_.getCntColumns();

    for (int i = 0; i < 3; ++i) {
        int line, column;
        do {
            line = 1 + rand() % cntLines;
            column = 1 + rand() % cntColumns;
        } while ((line == 1 && (column == 1 || column == cntColumns )) || (line == cntLines &&
        (column == 1 || column == cntColumns)) || map_.getContentPosition(line, column));

        treasures_.emplace_back(make_pair(line, column));
    }
}

/**
 *  Play one round: move all the adventurers
 * @param step - the number of the current step
 */
void Game::playOneRound(int step) {
    for (auto it : adventurers_)
        if (it->canAdventurerMove(map_))
            it->move(map_, step);
}
