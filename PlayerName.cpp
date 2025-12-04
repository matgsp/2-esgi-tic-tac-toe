#include "PlayerName.h"
#include <iostream>
#include <string>

using namespace std;

string AskName(){
    string pseudo = "";

    while (pseudo.empty()) {
        cout << "Entrez votre pseudo : ";
        getline(cin, pseudo);

        if (pseudo.empty()) {
            cout << "Le pseudo ne peut pas être vide !\n";
        }
    }

    return pseudo;
}
