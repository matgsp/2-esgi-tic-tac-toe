#include "Game.h"
#include <iostream>

using namespace std;

Game::Game() : j1(), j2(), grid()
{
    
    currentPlayer = &j1;
}

void Game::start()
{
    int selectedSquare;
    grid.display();
    j1.setToken("X");
    j2.setToken("O");
    do {
        cout << currentPlayer->getName() << " a vous de jouer ! Choisissez une case : " << endl;
        cin >> selectedSquare;
        play(selectedSquare);

        grid.display();

        if (currentPlayer == &j1){
            currentPlayer = &j2;
        }else{
            currentPlayer = &j1;
        }


        system("pause");
    }while(true);
}

void Game::selectName()
{
    cout << "Veuillez saisir le nom du joueur 1 :";
    string name1;
    cin >> name1;
    j1.setName(name1);

    cout << "Veuillez saisir le nom du joueur 2 :";
    string name2;
    cin >> name2;
     j2.setName(name2);
}

Square Game::play(int carre)
{
    Square &currentSquare = grid.getSquare(carre);

    if(!currentSquare.hasToken()){
        currentSquare.setToken(currentPlayer->getToken());

    }
    return currentSquare.getSquare(carre);
}


