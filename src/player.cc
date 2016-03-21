#include "player.h"

Player::Player(std::string name, char token): 
	name(name), cash(1500), token(token) {
	// probably cout that the person is created
}

int Player::getCash(void) {
	return cash;
}

std::string Player::getName(void) {
	return name;
}
