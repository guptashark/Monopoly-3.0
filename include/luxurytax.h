#ifndef LUXURYTAX_H
#define LUXURYTAX_H

#include "unownable.h"

class LuxuryTax : public Unownable {

public:
	LuxuryTax(std::string name, Game *game);
	void tileAction(void);

	// Debugging
	void printInfo(void) const;
};


#endif
