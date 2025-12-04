#ifndef COLUMN_H
#define COLUMN_H

#include <array>
#include "Square.h"

class Column {
    private:
        int x;
        int y;
        array<Square,3> square_list;
    public:
        Column();
        Column(int xCoord, int yCoord);
        int getX() const;
        void display();
        Square& getSquare(int yCoord);
        int getSquareNumber();
        bool squareExist(int yCoord);
};

#endif