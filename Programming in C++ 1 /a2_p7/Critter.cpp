/*
	CH08-320142
	a2 p7.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setAge(int newage) {
    age = newage;
}

void Critter::setWeight(double newweight) {
	weight = newweight;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << " My age is "<<age << " and I weight "<<weight<<" kilos"<< endl;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getAge() {
	return age;
}

double Critter::getWeight() {
	return weight;
}
