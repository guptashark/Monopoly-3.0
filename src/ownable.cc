#include "ownable.h"

Ownable::Ownable(std::string name, std::string color, unsigned int price): 
	Tile(name), color(color), price(price) {}

Ownable::~Ownable() {}
