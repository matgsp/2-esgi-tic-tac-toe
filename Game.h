#ifndef GAME_H
#define GAME_H

#include "Grid/Grid.h"
#include <array>
#include <vector>

class Game
{
    private:
        Grid grid;
         
    public:
        Game();
        void start();
        Square play(int col);
};

#endif