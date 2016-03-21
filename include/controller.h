#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "game.h"

class Controller {

private: 
	Game game;
public:
	void startUp(void);
	
	// for debug
	void showStatus(void);
};

#endif
	
