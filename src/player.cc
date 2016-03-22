#include "player.h"
#include <iostream>

Player::Player(std::string name, char token): 
	name(name), cash(1500), token(token) {
}

Player::Player(const Player &p): name(p.name), cash(p.cash), token(p.token) {
}

int Player::getCash(void) const {
	return cash;
}

std::string Player::getName(void) const {
	return name;
}
