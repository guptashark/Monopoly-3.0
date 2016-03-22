#include "unownable.h"
#include <iostream>

Unownable::Unownable(std::string name, Game *game): 
	Tile(name), game(game) {}

void Unownable::printInfo(void) const {
	std::cout << "This is luxtax." << std::endl;
}
