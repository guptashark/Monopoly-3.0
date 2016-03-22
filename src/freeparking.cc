#include <iostream>
#include "freeparking.h"

FreeParking::FreeParking(std::string name, Game *game): 
	Unownable(name, game) {}

void FreeParking::tileAction(void) {
	std::cout << "This is the goto tile." << std::endl;
}

void FreeParking::printInfo(void) const {
	std::cout << "goto info" << std::endl;
}
