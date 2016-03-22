#include <iostream>
#include "property.h"

Property::Property(std::string name, std::string color, unsigned int price): 
	Ownable(name, color, price) {}

unsigned int Property::getRent() {
	return 25;
}

void Property::printInfo() const {
	std::cout << "Property name: " << name << std::endl;
}
