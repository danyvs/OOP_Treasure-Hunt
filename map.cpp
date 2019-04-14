//
// Created by Dany on 13.04.2019.
//

#include <cstdlib>
#include "map.h"

void Map::generateTreasures() {
    for (int i = 0; i < 3; ++i) {
        int line = rand() % cntLines_ ;
        int column = rand() % cntColumns_;
        while ((line == 0 && (column == 0 || column == cntColumns_ - 1)) || (line == cntLines_ - 1
        && (column == 0 || column == cntColumns_ - 1)) || content_[line][column]) {
            // in corners or position already occupied
            line = rand() % cntLines_ ;
            column = rand() % cntColumns_;
        }
        content_[line][column] = 1;
    }
}

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