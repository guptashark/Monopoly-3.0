#include <iostream>
#include "incometax.h"

IncomeTax::IncomeTax(std::string name, Game *game): 
	Unownable(name, game) {}

void IncomeTax::tileAction(void) {
	std::cout << "This is the luxury tax tile." << std::endl;
}

void IncomeTax::printInfo(void) const {
	std::cout << "Luxtax info" << std::endl;
}
