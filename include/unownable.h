#ifndef UNOWNABLE_H
#define UNOWNABLE_H

#include "tile.h"

class Game;

class Unownable : public Tile {

private: 
	Game *game; // So that we can do our jobs (should this be const?)
public: 
	Unownable(std::string name, Game *game);
	void printInfo(void) const;
};


#endif
