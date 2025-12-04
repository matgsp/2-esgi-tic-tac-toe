#ifndef SQUARE_H
#define SQUARE_H

#include <string>
#include "../Optional.h"

using namespace std;

class Square {
    private:
        int x;
        Optional<string> token;

    public:
        Square();
        Square(int xCoord);
        int getX() const;
        void setToken(const string& value);
        Optional<string>& getToken();
        void clearToken();
        static int getSquare(int xCoord);

        void displaySquare();
        bool hasToken();

};

#endif