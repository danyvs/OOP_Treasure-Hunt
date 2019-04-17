//
// Created by Dany on 13.04.2019.
//

#include <algorithm>
#include <cstdlib>
#include "adventurer.h"

/**
 *
 * @param line
 * @param column
 */
Adventurer::Adventurer(int line, int column) {
    position_ = std::make_pair(line, column);
}

/**
 *  Check if current Adventurer can move into a neighbour cell
 * @param map - Map
 * @return true or false, if the Adventurer can move or not
 */
bool Adventurer::canAdventurerMove(Map &map) {
    const int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
    const int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

    int line = position_.first;
    int column = position_.second;
    for (int i = 0; i < 8; ++i) {
        int newLine = line + dx[i];
        int newColumn = column + dy[i];
        if (map.getContentPosition(newLine, newColumn) == 0)
            return true;
    }

    return false;
}

/**
 *
 * @param line
 * @param column
 */
AdventurerA::AdventurerA(int line, int column) : Adventurer(line, column) {

}

/**
 *
 * @param map
 * @param step
 */
void AdventurerA::move(Map& map, int step) {
    if (step % 2) {
        int line, column;

        // try to move the adventurer in a neighbour cell
        do {
            line = position_.first + rand() % 3 - 1;
            column = position_.second + rand() % 3 - 1;
        } while (map.getContentPosition(line, column) == -1);

        position_ = std::make_pair(line, column);
        map.setContentPosition(line, column, -1);
    }
}