/*
	CH08-320142
	a3 p2.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c1,c2("Tani"),c3("Vani",8,8),c4("Bini",4,9,12);

    //change the hunger levels to 2
	c1.setHunger(2);
	c2.setHunger(2);
	c3.setHunger(2);
	c4.setHunger(2);

	c1.print();
	c2.print();
	c3.print();
	c4.print();

	return 0;
}
