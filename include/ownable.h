#ifndef OWNABLE_H
#define OWNABLE_H

#include "tile.h"
#include <string>

class Ownable : public Tile {

protected: 
	const std::string color;
	const unsigned int price;
public: 
	Ownable(std::string name, 
			std::string color, 
			unsigned int price); // This'll never be used anyways~


	virtual unsigned int getRent() = 0;	
	// FOr utilities, we can store the roll in game, 
	// and give utilities a pointer to game 
	// so that they can get the roll to calculate rent. 

	// For debug purposes
	//virtual void printInfo(void) = 0;

};

#endif
