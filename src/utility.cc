#include <iostream>
#include "utility.h"

Utility::Utility(std::string name, std::string color, unsigned int price): 
	Ownable(name, color, price) {}

unsigned int Utility::getRent() {
	return 25;
}

void Utility::printInfo() const {
	std::cout << "Utility name: " << name << std::endl;
}
