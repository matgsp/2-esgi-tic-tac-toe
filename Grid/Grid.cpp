#include "Grid.h"
#include <iostream>
#include <array>

using namespace std;

Grid::Grid() {
    for(int x = 0; x<9; x++) {
        square_list[x] = Square(x);
    
    }
}

void Grid::display() {
    system("cls");
    for(int bloc = 0; bloc < 9 ; bloc++) {
        if(bloc % 3 == 0){
            cout << endl;
        }
        square_list[bloc].displaySquare();
    }

}

Square& Grid::getSquare(int xCoord) {
    return square_list[xCoord];
}

/*void Grid::reset(){
    for(int col = 0; col < square_list.size() ; col++) {
        for(int x = 0; x < 3; x++){
            square_list[col].getSquare(x).getToken().reset();
        }
    }
}*/