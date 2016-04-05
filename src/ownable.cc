#include "ownable.h"
#include "game.h"

Ownable::Ownable(std::string name, Game *game, std::string color, unsigned int price): 
	Tile(name, game), color(color), price(price), owner(NULL) {}

Ownable::~Ownable() {}

void Ownable::tileAction() {
	if(owner == NULL) {
		// sell the place
	} 

	if(owner == game->getCurrentPlayer()) {
		// do nothing. 
	}

	// only remaining case is the current player pays rent. 
	unsigned int rent = getRent();

	game->playerPay(game->getCurrentPlayer(), rent);
	game->playerCollect(owner, rent);
}
