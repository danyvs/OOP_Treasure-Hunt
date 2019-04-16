#include <iostream>
#include <vector>
#include "game.h"
#include "map.h"
#include "adventurer.h"

using namespace std;

int main() {
    Map map(15, 15);
    map.generateTreasures();
    map.printMap();
    return 0;
}