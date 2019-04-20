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
    foundATreasure_ = false;
    rankingPlace_ = 0;
}

/**
 *  Getter for the name of an Adventurer
 * @return (string) name_
 */
string Adventurer::getName() const {
    return name_;
}

/**
 *  Getter for the position of an Adventurer
 * @return (pair<int, int>) position_
 */
pair<int, int> Adventurer::getPosition() const {
    return position_;
}

/**
 *  Setter for the variable maintaining if an Adventurer found a treasure or not
 * @param value - bool
 */
void Adventurer::setFoundATreasure(bool value) {
    foundATreasure_ = value;
}

/**
 *  Getter for the variable maintaining if an Adventurer found a treasure or not
 * @return (bool) foundATreasure_
 */
bool Adventurer::getFoundATreasure() const {
    return foundATreasure_;
}

/**
 *  Setter for the place in the ranking of an Adventurer
 * @param number - int, the rank
 */
void Adventurer::setRankingPlace(int number) {
    rankingPlace_ = number;
}

/**
 *  Getter for the place in the ranking of an Adventurer
 * @return (int) rankingPlace_
 */
int Adventurer::getRankingPlace() const {
    return rankingPlace_;
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
 *  Check if AdventurerA can move into a neighbour cell
 * @param map - Map
 * @return true or false, if the AdventurerA can move or not
 */
bool AdventurerA::canAdventurerMove(Map &map) {
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
 *  Move function for AdventurerA
 * @param map - Map
 * @param step - the number of the current round
 */
void AdventurerA::move(Map& map, int step) {
    int line, column;
    int index = step % 8;
    // try to move the adventurer in a neighbour cell
    do {
        line = position_.first + dx[index];
        column = position_.second + dy[index];
        index = (index + 1) % 8;
    } while (map.getContentPosition(line, column) == 1);

    position_ = make_pair(line, column);
    map.setContentPosition(line, column, 1);
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