#include <iostream>
#include "jail.h"

Jail::Jail(std::string name, Game *game): 
	Unownable(name, game) {}

void Jail::tileAction(void) {
	std::cout << "This is the goto tile." << std::endl;
}

void Jail::printInfo(void) const {
	std::cout << "goto info" << std::endl;
}
