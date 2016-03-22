#ifndef FREEPARKING_H
#define FREEPARKING_H

#include "unownable.h"

class FreeParking: public Unownable {

public:
	FreeParking(std::string name, Game *game);
	void tileAction(void);
	// Debugging
	void printInfo(void) const;
};


#endif
