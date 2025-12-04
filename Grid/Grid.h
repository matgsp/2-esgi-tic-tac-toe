#ifndef GRID_H
#define GRID_H

#include <array>
#include "Column.h"
#include "Square.h"

class Grid {
    private:
        array<Square,9> square_list;
    public:
        Grid();
        void display();
        Square& getSquare(int xCoord);
        void reset();
};

#endif