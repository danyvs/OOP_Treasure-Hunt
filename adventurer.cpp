//
// Created by Dany on 13.04.2019.
//

#include <algorithm>
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
        if (!map.getContentPosition(newLine, newColumn))
            return true;
    }

    return false;
}

/**
 *  Constructor for AdventurerA
 * @param line - int, the line to place the Adventurer on
 * @param column - int, the column to place the Adventurer on
 */
AdventurerA::AdventurerA(int line, int column) : Adventurer(line, column) {

}

/**
 *
 * @param map
 * @param step
 */
void AdventurerA::move(Map& map, int step) {
    int line, column;
    ++step;

    // try to move the adventurer in a neighbour cell
    do {
        // line = ;
        // column = ;
    } while (map.getContentPosition(line, column) == 1);

    position_ = std::make_pair(line, column);
    map.setContentPosition(line, column, -1);
}

/**
 *  Constructor for AdventurerB
 * @param line - int, the line to place the Adventurer on
 * @param column - int, the column to place the Adventurer on
 */
AdventurerB::AdventurerB(int line, int column) : Adventurer(line, column) {

}

/**
 *
 * @param map
 * @param step
 */
void AdventurerB::move(Map& map, int step) {
    int line, column;
    ++step;

    // try to move the adventurer in a neighbour cell
    do {
        // line = ;
        // column = ;
    } while (map.getContentPosition(line, column) == 1);

    position_ = std::make_pair(line, column);
    map.setContentPosition(line, column, -1);
}

/**
 *  Constructor for AdventurerC
 * @param line - int, the line to place the Adventurer on
 * @param column - int, the column to place the Adventurer on
 */
AdventurerC::AdventurerC(int line, int column) : Adventurer(line, column) {

}

/**
 *
 * @param map
 * @param step
 */
void AdventurerC::move(Map& map, int step) {
    int line, column;
    ++step;

    // try to move the adventurer in a neighbour cell
    do {
        // line = ;
        // column = ;
    } while (map.getContentPosition(line, column) == 1);

    position_ = std::make_pair(line, column);
    map.setContentPosition(line, column, -1);
}

/**
 *  Constructor for AdventurerD
 * @param line - int, the line to place the Adventurer on
 * @param column - int, the column to place the Adventurer on
 */
AdventurerD::AdventurerD(int line, int column) : Adventurer(line, column) {

}

/**
 *
 * @param map
 * @param step
 */
void AdventurerD::move(Map& map, int step) {
    int line, column;
    ++step;

    // try to move the adventurer in a neighbour cell
    do {
        // line = ;
        // column = ;
    } while (map.getContentPosition(line, column) == 1);

    position_ = std::make_pair(line, column);
    map.setContentPosition(line, column, -1);
}