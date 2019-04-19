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

    Game game(lines, columns);

    // for (int i = 0; i < 10; ++i)
    //     game.playOneRound(i);
    game.print();


    return 0;
}