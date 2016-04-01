#ifndef UNOWNABLE_H
#define UNOWNABLE_H

#include "tile.h"

class Unownable : public Tile {

private: 
public: 
	Unownable(std::string name, Game *game);
	void printInfo(void) const;
};


#endif
