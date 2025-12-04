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
    cout << currentPlayer->getName() << " a vous de jouer ! Choisissez une colonne : "<<endl;
    system("pause");

}

void Game::selectName()
{
    cout << "Veillez saisir le nom du joueur 1 :";
    string name1;
    cin >> name1;
    j1.setName(name1);
    //cout << "Veillez saisir le token du joueur 1 :";
    //string token1;
    // while (true){
    //     cin >> token1;
    //     if (token1.size() == 1){
    //         j1.setToken(token1);
    //         break;
    //     }
    //     cout << "Un seul caractere possible, reessayez :";
    // }
    cout << "Veillez saisir le nom du joueur 2 :";
    string name2;
    cin >> name2;
     j2.setName(name2);
     //cout << "Veillez saisir le token du joueur 2 :";
    //  //string token2;
    //  while (true){
    //      cin >> token2;
    //      if (token2.size() == 1){
    //         j2.setToken(token2);
    //         break;
    //     }
    //     cout << "Un seul caractere possible, reessayez :";
    // }
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


