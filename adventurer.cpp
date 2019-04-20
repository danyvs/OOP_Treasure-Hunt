//
// Created by Dany on 13.04.2019.
//

#include <algorithm>
#include "adventurer.h"

/**
 *  Constructor for class Adventurer
 *  Initialize the name and the position with given data
 * @param line - int, the line to place the Adventurer on
 * @param column - int, the column to place the Adventurer on
 * @param name - string, the name of the Adventurer
 */
Adventurer::Adventurer(int line, int column, const string& name) {
    name_ = name;
    position_ = make_pair(line, column);
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
 *  Getter for the position of an Adventurer
 * @return (pair<int, int>) position
 */
std::pair<int, int> Adventurer::getPosition() {
    return position_;
}

/**
 *
 * @return
 */
string Adventurer::getName() const {
    return name_;
}

/**
 *  Constructor for AdventurerA
 * @param line - int, the line to place the Adventurer on
 * @param column - int, the column to place the Adventurer on
 * @param name, string, the name of the Adventurer
 */
AdventurerA::AdventurerA(int line, int column, const string& name) : Adventurer(line, column, name) {

}

/**
 *
 * @param map
 * @param step
 */
void AdventurerA::move(Map& map, int step) {
/*    int line, column;
    ++step;

    // try to move the adventurer in a neighbour cell
    do {
        // line = ;
        // column = ;
    } while (map.getContentPosition(line, column) == 1);

    position_ = std::make_pair(line, column);
    map.setContentPosition(line, column, -1);*/
}

/**
 *  Constructor for AdventurerB
 * @param line - int, the line to place the Adventurer on
 * @param column - int, the column to place the Adventurer on
 * @param name, string, the name of the Adventurer
 */
AdventurerB::AdventurerB(int line, int column, const string& name) : Adventurer(line, column, name) {

}

/**
 *
 * @param map
 * @param step
 */
void AdventurerB::move(Map& map, int step) {
  /*  int line, column;
    ++step;

    // try to move the adventurer in a neighbour cell
    do {
        // line = ;
        // column = ;
    } while (map.getContentPosition(line, column) == 1);

    position_ = std::make_pair(line, column);
    map.setContentPosition(line, column, -1);*/
}

/**
 *  Constructor for AdventurerC
 * @param line - int, the line to place the Adventurer on
 * @param column - int, the column to place the Adventurer on
 * @param name, string, the name of the Adventurer
 */
AdventurerC::AdventurerC(int line, int column, const string& name) : Adventurer(line, column, name) {

}

/**
 *
 * @param map
 * @param step
 */
void AdventurerC::move(Map& map, int step) {/*
    int line, column;
    ++step;

    // try to move the adventurer in a neighbour cell
    do {
        // line = ;
        // column = ;
    } while (map.getContentPosition(line, column) == 1);

    position_ = std::make_pair(line, column);
    map.setContentPosition(line, column, -1);*/
}

/**
 *  Constructor for AdventurerD
 * @param line - int, the line to place the Adventurer on
 * @param column - int, the column to place the Adventurer on
 * @param name, string, the name of the Adventurer
 */
AdventurerD::AdventurerD(int line, int column, const string& name) : Adventurer(line, column, name) {

}

/**
 *
 * @param map
 * @param step
 */
void AdventurerD::move(Map& map, int step) {/*
    int line, column;
    ++step;

    // try to move the adventurer in a neighbour cell
    do {
        // line = ;
        // column = ;
    } while (map.getContentPosition(line, column) == 1);

    position_ = std::make_pair(line, column);
    map.setContentPosition(line, column, -1);*/
}