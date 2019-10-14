/*
	CH08-320142
	a4 p3.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;


int main(int argc, char** argv) {

	cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

	cout << "\nCreating a Elf.\n";
    Elf e;
    e.run();
    e.walk();

    cout << "\nCreating a Alien.\n";
    Alien a;
    a.run();
    a.alienate();

    return 0;
}
