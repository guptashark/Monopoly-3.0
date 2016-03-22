#include <iostream>
#include "game.h"
#include "railroad.h"
#include "property.h"
#include "utility.h"
#include "unownable.h"
#include "luxurytax.h"
#include "communitychest.h"
#include "chance.h"
#include "freeparking.h"
#include "gotojail.h"
#include "jail.h"
#include "start.h"

Game::Game(void): numPlayers(0) {

	tiles.emplace_back(new Start("Go", this));
	tiles.emplace_back(new Property("Mediterranean Ave.", "brown", 60, 1, 1, 1, 1, 1));
	tiles.emplace_back(new LuxuryTax("CommunityChest", this));
	tiles.emplace_back(new Property("Baltic Ave.", "brown", 60, 1, 1, 1, 1, 1));
	tiles.emplace_back(new Railroad("Reading", "rails", 200));
	
	tiles.emplace_back(new Property("Oriental Ave.", "teal", 100, 1, 1, 1, 1, 1));
	tiles.emplace_back(new Chance("Chance", this));
	tiles.emplace_back(new Property("Vermont Ave.", "teal", 100, 1, 1, 1, 1, 1));
	tiles.emplace_back(new Property("Connecticut Ave.", "teal", 120, 1, 1, 1, 1, 1));
	tiles.emplace_back(new Jail("Jail", this));

	tiles.emplace_back(new Property("St. Charles Place", "purple", 140, 1, 1, 1, 1, 1));

	tiles.emplace_back(new Railroad("Reading", "rails", 200));
	tiles.emplace_back(new Railroad("Board rail", "rails", 200));
	tiles.emplace_back(new Property("Boardwalk", "blue", 400, 1, 1, 1, 1, 1));
	tiles.emplace_back(new Utility("Water Works", "utility", 150));
	tiles.emplace_back(new LuxuryTax("luxury tax", this));
	tiles.emplace_back(new CommunityChest("chest", this));
	tiles.emplace_back(new FreeParking("free", this));
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

