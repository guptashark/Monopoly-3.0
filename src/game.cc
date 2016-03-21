#include <iostream>
#include "game.h"

Game::Game(void): numPlayers(0) {}

void Game::addPlayer(std::string name, char token) {
	players.push_back(Player(name, token));
}

// For debugging purposes
void Game::listPlayers(void) {

	std::vector<Player>::iterator i;
	for(i = players.begin(); i != players.end(); i++) {
		std::cout << (*i).getName() << " " << (*i).getCash() << std::endl;
	}
}
