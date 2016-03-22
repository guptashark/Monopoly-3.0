#ifndef RAILROAD_H
#define RAILROAD_H

#include "ownable.h"

class Railroad : public Ownable {

	// gets its own cool rent function or something. 
public: 
	Railroad(std::string name, std::string color, unsigned int price);

	void tileAction(void) { getRent(); };
	unsigned int getRent() const;

	// Debugging purposes
	void printInfo(void) const;

};			

#endif
