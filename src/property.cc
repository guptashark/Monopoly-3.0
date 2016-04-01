#include <iostream>
#include "property.h"

Property::Property(std::string name, 
					Game *game,
					std::string color, 
					unsigned int price, 
					unsigned int rent,
					unsigned int oneHouseRent,
					unsigned int twoHouseRent,
					unsigned int threeHouseRent,
					unsigned int fourHouseRent,
					unsigned int hotelRent,
					unsigned int mortgage,
					unsigned int housePrice):
	Ownable(name, game, color, price),
	numHouses(0),
	hotel(false),
	isMortgaged(false),
	rent(rent),
	oneHouseRent(oneHouseRent),
	twoHouseRent(twoHouseRent),
	threeHouseRent(threeHouseRent),
	fourHouseRent(fourHouseRent),
	hotelRent(hotelRent),
	mortgage(mortgage),
	housePrice(housePrice)
{}

unsigned int Property::getRent() const {
	return 0;


}

void Property::printInfo() const {
	std::cout << "Property name: " << name << std::endl;
}
