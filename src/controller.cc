#include <iostream>
#include <string>
#include <sstream>
#include "controller.h"

bool safeReadUnsignedInt(unsigned int &x) {

	unsigned int y;
	std::string s;
	
	std::cin >> s;
	std::stringstream ss(s);

	if(ss >> y) {
		x = y;
		return true;
	} else {
		return false;
	}
}



void Controller::startUp(void) {
	
	unsigned int numPlayers = 0;
	
	std::cout << "Please enter the number of players (max 8): ";

	bool result = safeReadUnsignedInt(numPlayers);


	while(!result || (numPlayers == 0 || numPlayers > 8)) {
		std::cout << "Please enter a number greater than 0 and less than 9: ";
		safeReadUnsignedInt(numPlayers);
	}

	std::cout << "Please enter the names of the players: ";
	
	for(unsigned int i = 0; i < numPlayers; i++) {

		std::string name;
		std::cin >> name;
		
		game.addPlayer(name, 'c');
	}
}

void Controller::showStatus(void) {

	game.listPlayers();
}
