#include <iostream>
#include "controller.h"

int main(void) {

	Controller c;
	c.startUp();	
	c.showStatus();

	std::cout << "All fine" << std::endl;
	return 0;
}
