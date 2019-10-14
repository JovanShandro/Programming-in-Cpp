/*
	CH08-320142
	a3 p2.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter() {
    cout<<"The default constructer has been called"<<endl;
    name = "default_critter";
    height = 5;
    boredom = hunger = 0;
}

Critter::Critter(string n, int h, int b, double he ): name(n){
    cout<<"The constructor with all parameters has been called"<<endl;
    hunger = h;
    boredom = b;
    height = he;
}

Critter::Critter(string n) :name(n){
    cout<<"The constructor with only 1 parameter has been called"<<endl;
    height = 5;
    boredom = hunger = 0;
}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name <<". My hunger level is " << hunger <<". My boredom = "<<boredom<<" and my height is "<<height <<  endl;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getBoredom(){
    return boredom;
}

double Critter::getHeight(){
    return height;
}

string Critter::getName(){
    return name;
}
