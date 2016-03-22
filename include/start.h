#ifndef START_H
#define START_H

#include "unownable.h"

class Start : public Unownable {

public:
	Start(std::string name, Game *game);
	void tileAction(void);

	// Debugging
	void printInfo(void) const;
};


#endif
