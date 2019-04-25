//
// Created by Dany on 14.04.2019.
//

#include <cstdlib>
#include <time.h>
#include "game.h"

/**
 *  Constructor for class Game
 * @param lines
 * @param columns
 */
Game::Game(int lines, int columns) : map_(lines, columns) {
    adventurers_.push_back(new AdventurerA(1, 1, "Dumb seeker"));
    map_.setContentPosition(1, 1, 1);

    adventurers_.push_back(new AdventurerB(1, map_.getCntColumns(), "Jack Sparrow"));
    map_.setContentPosition(1, map_.getCntColumns(), 1);

    adventurers_.push_back(new AdventurerC(map_.getCntColumns(), 1, "Lucky seeker"));
    map_.setContentPosition(map_.getCntColumns(), 1, 1);

    adventurers_.push_back(new AdventurerD(map_.getCntColumns(), map_.getCntColumns(), "Seeeeker"));
    map_.setContentPosition(map_.getCntColumns(), map_.getCntColumns(), 1);

    gameFinished_ = false;
}

/**
 *  Generate positions for the treasures
 */
void Game::generateTreasures() {
    srand(time(nullptr));
    int cntLines = map_.getCntLines();
    int cntColumns = map_.getCntColumns();

    for (int i = 0; i < 3; ++i) {
        int line, column;
        do {
            line = 1 + rand() % cntLines;
            column = 1 + rand() % cntColumns;
        } while ((line == 1 && (column == 1 || column == cntColumns )) || (line == cntLines &&
        (column == 1 || column == cntColumns)) || map_.getContentPosition(line, column));

        cout << "A treasure was generated on line " << line << " and column " << column << "\n";
        treasures_.emplace_back(make_pair(line, column));
    }
}

/**
 *  Play one round: move all the adventurers
 * @param step - the number of the current step
 */
void Game::playOneRound(int step) {
    if (!gameFinished_) {
        cout << "Round #" << step << "\n";
        for (auto adventurer : adventurers_)
            if (find(winningAdventurers_.begin(), winningAdventurers_.end(), adventurer) == winningAdventurers_.end() &&
            find(losingAdventurers_.begin(), losingAdventurers_.end(), adventurer) == losingAdventurers_.end()) {
                if (adventurer->canAdventurerMove(map_)) {
                    cout << adventurer->getName() << " : ";

                    // initial position
                    pair<int, int> positionAdventurer = adventurer->getPosition();
                    cout << positionAdventurer.first << " " << positionAdventurer.second << " -> ";

                    // position after moving
                    adventurer->move(map_, step);
                    positionAdventurer = adventurer->getPosition();
                    cout << positionAdventurer.first << " " << positionAdventurer.second << "\n";

                    // verify if the current adventurer found a treasure
                    auto itFindTreasure = find(treasures_.begin(), treasures_.end(), positionAdventurer);
                    if (itFindTreasure != treasures_.end()) {
                        cout << adventurer->getName() << " found a treasure!\n";
                        treasures_.erase(itFindTreasure);
                        adventurer->setFoundATreasure(true);
                        winningAdventurers_.push_back(adventurer);
                    }
                } else {
                    cout << adventurer->getName() << " was eliminated, because he can't move any more!\n";
                    losingAdventurers_.push_back(adventurer);
                }
            }
        gameFinished_ = ((winningAdventurers_.size() + losingAdventurers_.size() == 4) || treasures_.empty());
    }
    cout << "\n";
}

/**
 *  Play a given number of rounds
 * @param cntRounds - int, the number of rounds to be played
 */
void Game::playNumberOfRounds(int cntRounds) {
    for (int i = 1; i <= cntRounds; ++i)
        if (!gameFinished_)
            playOneRound(i);
        else {
            cout << "Game ended before the given number of rounds!\n";
            break;
        }
}

/**
 *  Play until the end of the game
 *  The game ends when there is no Adventurer left or when all the treasures are found
 */
void Game::play() {
    int round = 1;
    while (!gameFinished_) {
        playOneRound(round);
        ++round;
    }
}

void Game::printLeaderborad() {
    int rank = 1;
    for (auto adventurer : winningAdventurers_)
        cout << adventurer->getName() << " finished on position " << rank++ << " and found a treasure! :)\n";
    for (auto adventurer : losingAdventurers_)
        cout << adventurer->getName() << " finished on position " << rank++ << ", but didn't find any treasures! :(\n";
}
