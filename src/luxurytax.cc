#include <iostream>
#include "luxurytax.h"

LuxuryTax::LuxuryTax(std::string name, Game *game): 
	Unownable(name, game) {}

void LuxuryTax::tileAction(void) {
	std::cout << "This is the luxury tax tile." << std::endl;
}

void LuxuryTax::printInfo(void) const {
	std::cout << "Luxtax info" << std::endl;
}
