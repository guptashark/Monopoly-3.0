#include <iostream>
#include "communitychest.h"

CommunityChest::CommunityChest(std::string name, Game *game): 
	Unownable(name, game) {}

void CommunityChest::tileAction(void) {
	std::cout << "This is the CC tile." << std::endl;
}

void CommunityChest::printInfo(void) const {
	std::cout << "CC info" << std::endl;
}
