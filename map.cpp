//
// Created by Dany on 13.04.2019.
//

#include <cstdlib>
#include <time.h>
#include "map.h"

/**
 *  Constructor for class Map
 *  Initialize the map with 0 and border it with -1
 * @param lines - int, the number of lines
 * @param columns - int, the number of columns
 */
Map::Map(int lines, int columns) : cntLines_(lines), cntColumns_(columns) {
    content_ = new int*[cntLines_ + 2];
    for (int i = 0; i < cntLines_ + 2; ++i)
        content_[i] = new int[cntColumns_ + 2];

    // border matrix with -1 to prevent the adventurers to go out of the map
    for (int i = 0; i <= cntLines_ + 1; ++i)
        content_[i][0] = content_[i][cntColumns_ + 1] = -1;
    for (int j = 0; j <= cntColumns_ + 1; ++j)
        content_[0][j] = content_[cntLines_ + 1][j] = -1;

    for (int i = 1; i <= cntLines_; ++i)
        for (int j = 1; j <= cntColumns_; ++j)
            content_[i][j] = 0;
}

/**
 *  Destructor for class Map
 *  Release the allocated memory
 */
Map::~Map() {
    for (int i = 0; i <= cntLines_ + 1; ++i)
        delete[] content_[i];
    delete content_;
}

/**
 *  Generate positions for the treasures
 */
void Map::generateTreasures() {
    srand(time(NULL));
    for (int i = 0; i < 3; ++i) {
        int line = 1 + rand() % cntLines_;
        int column = 1 + rand() % cntColumns_;
        while ((line == 1 && (column == 1 || column == cntColumns_ )) || (line == cntLines_ &&
        (column == 1 || column == cntColumns_)) || content_[line][column]) {
            // in corners or position already occupied
            line = 1 + rand() % cntLines_ ;
            column = 1 + rand() % cntColumns_;
        }
        content_[line][column] = 1;
    }
}

/**
 *  Getter for the number of lines
 * @return (int) cntLines_
 */
int Map::getCntLines() {
    return cntLines_;
}

/**
 *  Getter for the number of columns
 * @return (int) cntColumns_
 */
int Map::getCntColumns() {
    return cntColumns_;
}

/**
 *  Getter for the content of a cell in map
 * @param line - int
 * @param column - int
 * @return int content_[line][column]
 */
int Map::getContentPosition(int line, int column) {
    if (line >= 0 && line <= cntLines_ + 1 && column >= 0 && column <= cntColumns_ + 1)
        return content_[line][column];
    return -1;
}

/**
 *  Setter for the content of the map at a given line and column
 * @param line
 * @param column
 * @param data
 */
void Map::setContentPosition(int line, int column, int data) {
    if (line >= 0 && line <= cntLines_ + 1 && column >= 0 && column <= cntColumns_ + 1)
        content_[line][column] = data;
}