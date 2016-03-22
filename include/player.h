#ifndef PLAYER_H
#define PLAYER_H

#include "ownable.h" 

#include <string>
#include <vector> 

class Player {
	
private:
	const std::string name; // Needs to be const... 
	unsigned int cash;
	std::vector<Ownable *> owned_assets; // Should this be a reference? 
	const char token; // Needs to be const as well... 
public:
	Player(std::string name, char token);
	Player(const Player &p);
	int getCash() const;
	std::string getName() const;
};

#endif


