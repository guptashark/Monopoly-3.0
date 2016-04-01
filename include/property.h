#ifndef PROPERTY_H
#define PROPERTY_H

#include "ownable.h"

class Property : public Ownable {

private: 
	unsigned int numHouses;
	bool hotel;
	bool isMortgaged;
	const unsigned int rent;
	const unsigned int oneHouseRent;
	const unsigned int twoHouseRent;
	const unsigned int threeHouseRent;
	const unsigned int fourHouseRent;
	const unsigned int hotelRent;
	const unsigned int mortgage;
	const unsigned int housePrice;
	// gets its own cool rent function or something. 
public: 
	Property(std::string name, 
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
			 unsigned int housePrice);
	
	void tileAction(void) {getRent();};
	unsigned int getRent() const;

	// Debugging purposes
	void printInfo(void) const;

};			

#endif
