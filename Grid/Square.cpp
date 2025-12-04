#include "Square.h"
#include <iostream>

using namespace std;

Square::Square() : x(0), token() {}

Square::Square(int xCoord) : x(xCoord), token() {}

int Square::getX() const { return x; }
Optional<string>& Square::getToken() {
    return token;
     }

void Square::setToken(const string& value) {
    token = value;
}

void Square::clearToken() {
    token.reset();
}

void Square::displaySquare() {
    cout << "[";
    if(token.has_value()){
        cout << token.value_ref();
    }else{
        cout << " ";
    }
    cout << "]";
}

int Square::getSquare(int xCoord) {
    return xCoord;
}

bool Square::hasToken(){
    return token.has_value();
}