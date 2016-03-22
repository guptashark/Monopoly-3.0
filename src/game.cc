#include <iostream>
#include "game.h"
#include "railroad.h"
#include "property.h"
#include "utility.h"

Game::Game(void): numPlayers(0) {
	tiles.emplace_back(new Railroad("B & R Railroad", "rails", 200));
	tiles.emplace_back(new Railroad("Reading", "rails", 200));
	tiles.emplace_back(new Railroad("Board rail", "rails", 200));
	tiles.emplace_back(new Property("Boardwalk", "blue", 400));
	tiles.emplace_back(new Utility("Water Works", "utility", 150));

}

Game::~Game(void) {

	std::vector<Tile *>::iterator i;
	for(i = tiles.begin(); i != tiles.end(); i++) {
		delete(*i);
	}
}

void Game::addPlayer(std::string name, char token) {

	players.emplace_back(Player(name, token));
}

// For debugging purposes
void Game::listPlayers(void) {

	std::vector<Player>::const_iterator i;
	for(i = players.begin(); i != players.end(); i++) {
		std::cout << (*i).getName() << " " << (*i).getCash() << std::endl;
	}
}

void Game::listTiles(void) {

	std::vector<Tile *>::const_iterator i;
	for(i = tiles.begin(); i != tiles.end(); i++) {
		(*i)->printInfo();
	}
}
