#include "Player.h"

Player::Player(){}

Player::Player(string n) : name(n) {}

string Player::getNom() const {
    return name;
}
Void Player::setName(const string& value) {
    name = value;
}

void Player::setToken(const string& value) {
    token = value;
}

string Player::getToken() const {
    return token;
}