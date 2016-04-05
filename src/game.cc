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
	tiles.emplace_back(new 
			Property("Mediterranean Avenue", this, "brown", 60, 2, 10, 30, 90, 160, 250, 30, 50));
	tiles.emplace_back(new 
			CommunityChest("CommunityChest", this));
	tiles.emplace_back(new 
			Property("Baltic Ave.", this, "brown", 60, 4, 20, 60, 180, 320, 450, 30, 50));
	tiles.emplace_back(new 
			IncomeTax("Income tax", this));

	tiles.emplace_back(new 
			Railroad("Reading", this, "rails", 200));
	tiles.emplace_back(new 
			Property("Oriental Ave.", this, "teal", 100, 6, 30, 90, 270, 400, 550, 50, 50));
	tiles.emplace_back(new 
			Chance("Chance", this));
	tiles.emplace_back(new 
			Property("Vermont Ave.", this, "teal", 100, 6, 30, 90, 270, 400, 550, 50, 50));
	tiles.emplace_back(new 
			Property("Connecticut Ave.", this, "teal", 120, 8, 40, 100, 300, 450, 600, 60, 50));

	tiles.emplace_back(new 
			Jail("Jail", this));
	tiles.emplace_back(new 
			Property("St. Charles Place", this, "purple", 140, 10, 50, 150, 450, 625, 750, 70, 100));
	tiles.emplace_back(new 
			Utility("Electric Company", this, "utility", 150));
	tiles.emplace_back(new 
			Property("States Avenue", this, "purple", 140, 10, 50, 150, 450, 625, 750, 70, 100));
	tiles.emplace_back(new 
			Property("Virginia Avenue", this, "purple", 160, 12, 60, 180, 500, 700, 900, 80, 100));

	tiles.emplace_back(new 
			Railroad("Pennsylvania", this, "rails", 200));
	tiles.emplace_back(new 
			Property("St. James Place", this, "orange", 180, 14, 70, 200, 550, 750, 950, 90, 100));
	tiles.emplace_back(new 
			CommunityChest("Community Chest", this));
	tiles.emplace_back(new 
			Property("Tennessee Avenue", this, "orange", 180, 14, 70, 200, 550, 750, 950, 90, 100));
	tiles.emplace_back(new 
			Property("New York Avenue", this, "orange", 200, 16, 80, 220, 600, 800, 1000, 100, 100));

	tiles.emplace_back(new 
			FreeParking("Free Parking", this));
	tiles.emplace_back(new 
			Property("Kentucky Avenue", this, "red", 220, 18, 90, 250, 700, 875, 1050, 110, 150));
	tiles.emplace_back(new 
			Chance("chance", this));
	tiles.emplace_back(new 
			Property("Indiana Avenue", this, "red", 220, 18, 90, 250, 700, 875, 1050, 110, 150));
	tiles.emplace_back(new 
			Property("Illinois Avenue", this, "red", 240, 20, 100, 300, 750, 925, 1100, 120, 150));

	tiles.emplace_back(new 
			Railroad("B&O Railroad", this, "rails", 200));
	tiles.emplace_back(new 
			Property("Atlantic Avenue", this, "yellow", 260, 22, 110, 330, 800, 975, 1150, 130, 150));
	tiles.emplace_back(new 
			Property("Ventnor Avenue", this, "yellow", 260, 22, 110, 330, 800, 975, 1150, 130, 150));
	tiles.emplace_back(new 
			Utility("Water Works", this, "utility", 150));
	tiles.emplace_back(new 
			Property("Marvin Gardens", this, "yellow", 280, 24, 120, 360, 850, 1025, 1200, 140, 150));

	tiles.emplace_back(new 
			GoToJail("Go to Jail", this));
	tiles.emplace_back(new 
			Property("Pacific Avenue", this, "green", 300, 26, 130, 390, 900, 1100, 1275, 150, 200));
	tiles.emplace_back(new 
			Property("North Carolina Avenue", this, "green", 300, 26, 130, 390, 900, 1100, 1275, 150, 200));
	tiles.emplace_back(new 
			CommunityChest("Community Chest", this));
	tiles.emplace_back(new 
			Property("Pennsylvania Avenue", this, "green", 320, 28, 150, 450, 1000, 1200, 1400, 160, 200));

	tiles.emplace_back(new 
			Railroad("Short Line", this, "rails", 200));
	tiles.emplace_back(new 
			Chance("chance", this));
	tiles.emplace_back(new 
			Property("Park Place", this, "blue", 350, 35, 175, 500, 1100, 1300, 1500, 175, 200));
	tiles.emplace_back(new 
			LuxuryTax("Luxury Tax", this));
	tiles.emplace_back(new 
			Property("Boardwalk", this, "blue", 400, 50, 200, 600, 1400, 1700, 2000, 200, 200));

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

int Game::playerPay(Player *p, unsigned int value) {
	// do nothing for now
	(void)p;
	(void)value;
	return 0;
}

int Game::playerCollect(Player *p, unsigned int value) {
	// do nothing for now
	(void)p;
	(void)value;
	return 0;
}

unsigned int Game::getNumOwned(Player *p, std::string color) {
	(void)p;
	(void)color;
	return 0;
}

Player *Game::getCurrentPlayer(void) {
	return currentPlayer;
}
