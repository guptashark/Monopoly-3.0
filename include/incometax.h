#ifndef INCOMETAX_H
#define INCOMETAX_H

#include "unownable.h"

class IncomeTax : public Unownable {

public:
	IncomeTax(std::string name, Game *game);
	void tileAction(void);

	// Debugging
	void printInfo(void) const;
};


#endif
