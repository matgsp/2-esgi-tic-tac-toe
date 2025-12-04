#include "Player.h"

Player::Player(){}

Player::Player(string n) : name(n) {}

string Player::getName() const {
    return name;
}
void Player::setName(const string& value) {
    name = value;
}

void Player::setToken(const string& value) {
    token = value;
}

string Player::getToken() const {
    return token;
}