#include <iostream>
#include "railroad.h"
#include "game.h"

Railroad::Railroad(std::string name, Game *game, std::string color, unsigned int price): 
	Ownable(name, game, color, price) {}

unsigned int Railroad::getRent() const {
	// figure out how many railroads the owner has. 

	unsigned int rent[4] = {25, 50, 100, 200};

	int railsOwned = game->getNumOwned(owner, "rails");

	if(railsOwned == 0 || railsOwned > 4) {
		// We have a problem. Throw something. 
		std::cout << "Player owns more than 4 railroads??" << std::endl;
	}

	return rent[railsOwned - 1];
}

void Railroad::printInfo() const {
	std::cout << "Railroad name: " << name << std::endl;
}
