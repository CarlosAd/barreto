#include "HelloWorld.h"
#include <iostream>

HelloWorld::HelloWorld() {
	this->msg = "Hello World";
}

void HelloWorld::print() {
	std::cout << this->msg << std::endl;
}
