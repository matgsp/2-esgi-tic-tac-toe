#include "Game.h"
#include <iostream>

using namespace std;

Game::Game() : grid()
{;
}

void Game::start()
{
    int selectedCol;
    grid.display();
    system("pause");
}

Square Game::play(int col)
{
    Column &currentCol = grid.getColumn(col);
    for (int i = currentCol.getSquareNumber() - 1; i >= 0; i--)
    {
        if (!currentCol.getSquare(i).hasToken())
        {
            currentCol.getSquare(i).setToken("x");
            return currentCol.getSquare(i);
        }
    }  
    return currentCol.getSquare(0);
}

