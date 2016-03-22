#include <iostream>
#include "property.h"

Property::Property(std::string name, 
					std::string color, 
					unsigned int price, 
					unsigned int oneHouseRent,
					unsigned int twoHouseRent,
					unsigned int threeHouseRent,
					unsigned int fourHouseRent,
					unsigned int hotelRent):
	Ownable(name, color, price),
	oneHouseRent(oneHouseRent),
	twoHouseRent(twoHouseRent),
	threeHouseRent(threeHouseRent),
	fourHouseRent(fourHouseRent),
	hotelRent(hotelRent) 
{}

unsigned int Property::getRent() const {
	
	return 25;
}

void Property::printInfo() const {
	std::cout << "Property name: " << name << std::endl;
}
