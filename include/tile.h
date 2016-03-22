#ifndef TILE_H
#define TILE_H

#include <string> 

class Tile {

protected: // Should this be private? 
	const std::string name;
	// Type information should be carried in children classes
	// This is basically just a... non-existant super class

public:
	
	Tile(std::string name);
	virtual ~Tile();
	// For debugging purposes.  
	virtual void printInfo(void) const = 0;
};

#endif
