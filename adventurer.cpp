//
// Created by Dany on 13.04.2019.
//

#include <algorithm>
#include <cstdlib>
#include "adventurer.h"

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
 *  Constructor for class AdventurerA
 */
AdventurerA::AdventurerA() {
    position_ = std::make_pair(1, 1);
}

/**
 *
 * @param map
 * @param step
 */
void AdventurerA::move(Map& map, int step) {
    if (step % 2) {
        int currentLine = position_.first;
        int currentColumn = position_.second;

        // try to move the adventurer in a neighbour cell
        currentLine += rand() % 3 - 1;
        currentColumn += rand() % 3 - 1;

        if (map.getContentPosition(currentLine, currentColumn) >= 0) {
            // the new position is accessible
            position_ = std::make_pair(currentLine, currentColumn);
        }
    }
}