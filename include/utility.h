#ifndef UTILITY_H
#define UTILITY_H

#include "ownable.h"

class Utility : public Ownable {

	// gets its own cool rent function or something. 
public: 
	Utility(std::string name, Game *game,  std::string color, unsigned int price);

	void tileAction(void);
	unsigned int getRent() const;

	// Debugging purposes
	void printInfo(void) const;

};			

#endif
