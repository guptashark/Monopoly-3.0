#include <iostream>
#include "chance.h"

Chance::Chance(std::string name, Game *game): 
	Unownable(name, game) {}

void Chance::tileAction(void) {
	std::cout << "This is the Chance tile." << std::endl;
}

void Chance::printInfo(void) const {
	std::cout << "CC info" << std::endl;
}
