//
// Created by Dany on 13.04.2019.
//

#include "map.h"

/**
 *  Getter for the content of a cell in map
 * @param line - int
 * @param column - int
 * @return int content_[line][column]
 */
int Map::getContentPosition(int line, int column) {
    if (line >= -1 && line <= cntLines_ && column >= -1 && column <= cntColumns_)
        return content_[line][column];
}