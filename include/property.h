#ifndef PROPERTY_H
#define PROPERTY_H

#include "ownable.h"

class Property : public Ownable {

	// gets its own cool rent function or something. 
public: 
	Property(std::string name, std::string color, unsigned int price);

	unsigned int getRent();

	// Debugging purposes
	void printInfo(void) const;

};			

#endif
