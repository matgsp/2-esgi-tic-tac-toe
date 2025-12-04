#include "Game.h"
#include <iostream>

using namespace std;

Game::Game() : j1(), j2(), grid()
{
    
    currentPlayer = &j1;
}

void Game::start()
{
    int selectedCol;
    grid.display();
    j1.setToken("X");
    j2.setToken("O");
    cout << currentPlayer->getName() << " a vous de jouer ! Choisissez une colonne : "<<endl;
    system("pause");

}

void Game::selectName()
{
    cout << "Veillez saisir le nom du joueur 1 :";
    string name1;
    cin >> name1;
    j1.setName(name1);

    cout << "Veillez saisir le nom du joueur 2 :";
    string name2;
    cin >> name2;
     j2.setName(name2);
}

Square Game::play(int col)
{

}


