#include <iostream>
#include "Critter.h"

//using namespace std;

void Critter::setName(std::string& newname) {
	name = newname;
}

/*
void setHunger(int newhunger, Critter c) {
	c.hunger = newhunger;
}
*/

void Critter::print() {
	std::cout << "I am " << name << ". My hunger level is " << hunger << "." << std::endl;
}

int Critter::getHunger() {
	return hunger;
}
