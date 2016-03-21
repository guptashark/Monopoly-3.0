#ifndef GAME_H
#define GAME_H

#include "player.h"
#include <string>
#include <vector>



#define MAX_NUM_PLAYERS 8

class Game {

private:
	unsigned short numPlayers;
	std::vector<Player> players;
//	std::vector<Tiles> tiles;
public:
	Game(void);

	void addPlayer(std::string name, char token);

	// For debugging puproses: 
	void listPlayers();

};


#endif
