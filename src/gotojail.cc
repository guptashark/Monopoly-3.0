#include <iostream>
#include "gotojail.h"

GoToJail::GoToJail(std::string name, Game *game): 
	Unownable(name, game) {}

void GoToJail::tileAction(void) {
	std::cout << "This is the goto tile." << std::endl;
}

void GoToJail::printInfo(void) const {
	std::cout << "goto info" << std::endl;
}
