#ifndef JAIL_H
#define JAIL_H

#include "unownable.h"

class Jail : public Unownable {

public:
	Jail(std::string name, Game *game);
	void tileAction(void);
	// Debugging
	void printInfo(void) const;
};


#endif
