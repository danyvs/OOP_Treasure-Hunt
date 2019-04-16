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
    adventurers_.push_back(new AdventurerA);
    adventurers_.push_back(new AdventurerB);
    adventurers_.push_back(new AdventurerC);
    adventurers_.push_back(new AdventurerD);
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
