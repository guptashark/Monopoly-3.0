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
#include "incometax.h"

Game::Game(void): numPlayers(0) {

	tiles.emplace_back(new Start("Go", this));
	tiles.emplace_back(new Property("Mediterranean Avenue", "brown", 60, 2, 30, 90, 160, 250, 1, 1));
	tiles.emplace_back(new CommunityChest("CommunityChest", this));
	tiles.emplace_back(new Property("Baltic Ave.", "brown", 60, 4, 20, 60, 180, 320, 250, 1));
	tiles.emplace_back(new IncomeTax("Income tax", this));

	tiles.emplace_back(new Railroad("Reading", "rails", 200));
	tiles.emplace_back(new Property("Oriental Ave.", "teal", 100, 1, 1, 1, 1, 1, 1, 1));
	tiles.emplace_back(new Chance("Chance", this));
	tiles.emplace_back(new Property("Vermont Ave.", "teal", 100, 1, 1, 1, 1, 1, 1, 1));
	tiles.emplace_back(new Property("Connecticut Ave.", "teal", 120, 1, 1, 1, 1, 1, 1, 1));

	tiles.emplace_back(new Jail("Jail", this));
	tiles.emplace_back(new Property("St. Charles Place", "purple", 140, 1, 1, 1, 1, 1, 1, 1));
	tiles.emplace_back(new Utility("Electric Company", "utility", 150));
	tiles.emplace_back(new Property("States Avenue", "purple", 140, 2, 3, 4, 5, 6, 7, 8));
	tiles.emplace_back(new Property("Virginia Avenue", "purple", 160, 2, 3, 4, 5, 6, 7, 8));

	tiles.emplace_back(new Railroad("Pennsylvania", "rails", 200));
	tiles.emplace_back(new Property("St. James Place", "orange", 180, 2, 3, 4, 5, 6, 7, 8));
	tiles.emplace_back(new CommunityChest("Community Chest", this));
	tiles.emplace_back(new Property("Tennessee Avenue", "orange", 180, 2, 3, 4, 5, 6, 7, 8));
	tiles.emplace_back(new Property("New York Avenue", "orange", 200,2, 3, 4 , 5, 6, 7, 8));

	tiles.emplace_back(new FreeParking("Free Parking", this));
	tiles.emplace_back(new Property("Kentucky Avenue", "red", 220, 2, 3, 4, 5 ,6, 7, 8));
	tiles.emplace_back(new Chance("chance", this));
	tiles.emplace_back(new Property("Indiana Avenue", "red", 220, 2, 3, 4, 5, 6, 7, 8));
	tiles.emplace_back(new Property("Illinois Avenue", "red", 240, 2, 3, 4, 5, 6, 7, 8));

	tiles.emplace_back(new Railroad("B&O Railroad", "rails", 200));
	tiles.emplace_back(new Property("Atlantic Avenue", "yellow", 260, 2, 3, 4, 5, 6, 7, 8));
	tiles.emplace_back(new Property("Ventnor Avenue", "yellow", 260, 2, 3, 4, 5, 6, 7, 8));
	tiles.emplace_back(new Utility("Water Works", "utility", 150));
	tiles.emplace_back(new Property("Marvin Gardens", "yellow", 280, 2, 3, 4, 5, 6, 7, 8));

	tiles.emplace_back(new GoToJail("Go to Jail", this));
	tiles.emplace_back(new Property("Pacific Avenue", "green", 300, 2, 3, 4, 5, 6, 7, 8));
	tiles.emplace_back(new Property("North Carolina Avenue", "green", 300, 2, 3, 4, 5, 6, 7, 8));
	tiles.emplace_back(new CommunityChest("Community Chest", this));
	tiles.emplace_back(new Property("Pennsylvania Avenue", "green", 320, 2, 3, 4, 5, 6, 7, 8));

	tiles.emplace_back(new Railroad("Short Line", "rails", 200));
	tiles.emplace_back(new Chance("chance", this));
	tiles.emplace_back(new Property("Park Place", "blue", 350, 2, 3, 4, 5, 6, 7, 8));
	tiles.emplace_back(new LuxuryTax("Luxury Tax", this));
	tiles.emplace_back(new Property("Boardwalk", "blue", 400, 2, 3, 4, 5, 6, 7, 8));
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

