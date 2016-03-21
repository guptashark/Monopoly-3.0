#include <iostream>
#include "game.h"

Game::Game(void): numPlayers(0) {}

void Game::addPlayer(std::string name, char token) {

	std::cout << "Adding a player." << std::endl;
	players.emplace_back(Player(name, token));
	std::cout << "Done adding the player" << std::endl;
}

// For debugging purposes
void Game::listPlayers(void) {

	std::vector<Player>::const_iterator i;
	for(i = players.begin(); i != players.end(); i++) {
		std::cout << (*i).getName() << " " << (*i).getCash() << std::endl;
	}
}
