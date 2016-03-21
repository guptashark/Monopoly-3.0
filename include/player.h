#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector> 

class Player {
	
private:
	std::string name;
	unsigned int cash;
//	std::vector<Ownable *> owned_assets;
	char token;
public:
	Player(std::string name, char token);

	int getCash();
	std::string getName();
};

#endif


