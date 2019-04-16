//
// Created by Dany on 14.04.2019.
//

#include "game.h"

/**
 *  Getter for currentState_
 * @return int currentState_
 */
int Game::getCurrentStep() {
    return currentStep_;
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