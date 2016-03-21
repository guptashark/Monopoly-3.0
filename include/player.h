#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector> 

class Player {
	
private:
	const std::string name; // Needs to be const... 
	unsigned int cash;
//	std::vector<Ownable *> owned_assets;
	const char token; // Needs to be const as well... 
public:
	Player(std::string name, char token);
	Player(const Player &p);
	//Player &operator=(const Player &p);

	int getCash() const;
	std::string getName() const;
};

#endif


