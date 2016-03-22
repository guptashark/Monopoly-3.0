#include <iostream>
#include "start.h"

Start::Start(std::string name, Game *game): 
	Unownable(name, game) {}

void Start::tileAction(void) {
	std::cout << "This is the goto tile." << std::endl;
}

void Start::printInfo(void) const {
	std::cout << "goto info" << std::endl;
}
