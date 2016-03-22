#ifndef COMMUNITYCHEST_H
#define COMMUNITYCHEST_H

#include "unownable.h"

class CommunityChest : public Unownable {

public:
	CommunityChest(std::string name, Game *game);
	void tileAction(void);

	// Debugging
	void printInfo(void) const;
};


#endif
