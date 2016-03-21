#include "player.h"
#include <iostream>

Player::Player(std::string name, char token): 
	name(name), cash(1500), token(token) {
	// probably cout that the person is created
	std::cout << "Constructor called." << std::endl;
}

Player::Player(const Player &p): name(p.name), cash(p.cash), token(p.token) {
	std::cout << "Copy constructor called (";
	std::cout << name << ")" << std::endl;
}

/* 
Player &Player::operator=(const Player &p) {
	std::cout << "Assignment operator called." << std::endl;	
	name = p.name;
	cash = p.cash;
	token = p.token;
	return *this;
}
*/
int Player::getCash(void) const {
	return cash;
}

std::string Player::getName(void) const {
	return name;
}
