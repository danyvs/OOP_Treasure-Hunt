#include <iostream>
#include <vector>
#include "game.h"

using namespace std;

int main() {
    int lines, columns;
    do {
        cout << "Input the number of lines (>= 15) and columns (>= 15): ";
        cin >> lines >> columns;
    } while (lines < 15 || columns < 15);

    // initialize the game
    Game game(lines, columns);
    game.generateTreasures();
    game.playNumberOfRounds(30);
/*
    string answer;
    int cntRounds;
    cout << "Do you want to play 'til the end? (YES / NO)\n";
    cin >> answer;
    if (answer == "YES")
        game.play();
    else {
        if (answer == "NO") {
            cout << "Do you want to play a given number of rounds? (YES / NO)\n";
            cin >> answer;
            while (answer == "YES") {
                cout << "Input the number of rounds you want to play: ";
                cin >> cntRounds;
                game.playNumberOfRounds(cntRounds);

                cout << "Do you want to play a given number of rounds? (YES / NO)\n";
                cin >> answer;
            }
        }
        else
            cout << "Invalid answer!\n";
    }
*/

    return 0;
}