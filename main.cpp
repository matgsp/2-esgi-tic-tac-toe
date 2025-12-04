#include <iostream>
#include <array>
#include "Grid/Square.h"
#include "Grid/Column.h"
#include "Grid/Grid.h"
#include "Player.h"
#include "Game.h"
using namespace std;

int main()
{
    Game game;

    game.selectName();
    game.start();
    system("pause");
    return 0;
}   