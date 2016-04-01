#include "ownable.h"

Ownable::Ownable(std::string name, Game *game, std::string color, unsigned int price): 
	Tile(name, game), color(color), price(price), owner(NULL) {}

Ownable::~Ownable() {}

void Ownable::tileAction() {
	// Do stuff
}

