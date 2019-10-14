/*
	CH08-320142
	a2 p7.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
    int age;
	double weight;

	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	//getting from user and setting age
	cout << "Age: ";
	cin >> age;
	c.setAge(age);

	//getting from user and setting weight
	cout << "Weight(in kg) ";
	cin >> weight;
	c.setWeight(weight);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}
