#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
private:
    string name;
    string token;

public:
    Player();
    Player(string n);
    string getName() const;
    void setName(const string& value);
    void setToken(const string& value);
    string getToken() const;
};

#endif