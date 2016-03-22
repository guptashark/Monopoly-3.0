#include <iostream>
#include "utility.h"

Utility::Utility(std::string name, std::string color, unsigned int price): 
	Ownable(name, color, price) {}

unsigned int Utility::getRent() const {
	return 25;
}

void Utility::tileAction(void) {
	// just print for now
	std::cout << "Utility stuff." << std::endl;
}

void Utility::printInfo() const {
	std::cout << "Utility name: " << name << std::endl;
}
