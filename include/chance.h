#ifndef CHANCE_H
#define CHANCE_H

#include "unownable.h"

class Chance : public Unownable {

public:
	Chance(std::string name, Game *game);
	void tileAction(void);
	// Debugging
	void printInfo(void) const;
};


#endif
