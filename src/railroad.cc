#include <iostream>
#include "railroad.h"

Railroad::Railroad(std::string name, Game *game, std::string color, unsigned int price): 
	Ownable(name, game, color, price) {}

unsigned int Railroad::getRent() const {
	return 25;
}

void Railroad::printInfo() const {
	std::cout << "Railroad name: " << name << std::endl;
}
