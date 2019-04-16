//
// Created by Dany on 13.04.2019.
//

#include <algorithm>
#include <cstdlib>
#include "adventurer.h"

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