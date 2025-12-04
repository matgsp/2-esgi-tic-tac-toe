#ifndef GAME_H
#define GAME_H

#include "Grid/Grid.h"
#include "Player.h"
#include <array>
#include <vector>

class Game
{
    private:
        Grid grid;
        Player j1;
        Player j2;
        Player* currentPlayer;

    public:
        Game();
        void selectName();
        void start();
        Square play(int carre);
};

#endif