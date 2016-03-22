#ifndef GO_TO_JAIL_H
#define GO_TO_JAIL_H

#include "unownable.h"

class GoToJail : public Unownable {

public:
	GoToJail(std::string name, Game *game);
	void tileAction(void);

	// Debugging
	void printInfo(void) const;
};


#endif
