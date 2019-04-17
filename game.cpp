//
// Created by Dany on 14.04.2019.
//

#include "game.h"

/**
 *  Constructor for class Game
 * @param lines
 * @param columns
 */
Game::Game(int lines, int columns) : map_(lines, columns) {
    adventurers_.push_back(new AdventurerA(1, 1));
    map_.setContentPosition(1, 1, -1);

    // adventurers_.push_back(new AdventurerB);
    // adventurers_.push_back(new AdventurerC);
    // adventurers_.push_back(new AdventurerD);
}

/**
 *  Play one round: move all the adventurers
 * @param step - the number of the current step
 */
void Game::playOneround(int step) {
    for (auto it : adventurers_)
        if (it->canAdventurerMove(map_))
            it->move(map_, step);

}

/**
 *  Getter for the content of a cell in map
 * @param line - int
 * @param column - int
 * @return int map_.content_[line][column]
 */
/*int Game::getContentPositionMap(int line, int column) {
    return map_.getContentPosition(line, column);
}*/
