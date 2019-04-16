#include <iostream>
#include <vector>
#include "game.h"

using namespace std;

int main() {
    int lines, columns;
    cout << "Input the nmber of lines and columns: ";
    cin >> lines >> columns;

    Game game(lines, columns);

    return 0;
}