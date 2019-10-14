/*
	CH08-320142
	a3 p4.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

Critter :: Critter() {
    cout<<"The default constructer has been called"<<endl;
    name = "default_critter";
    height = 5;
    boredom = hunger = 0;
    thirst = hunger;
}

Critter :: Critter(string n, int h, int b, double he ): name(n){
    cout<<"The constructor with all parameters has been called"<<endl;
    hunger = (double)h /10;
    boredom = b;
    height = he;
    thirst = hunger;
}

Critter :: Critter(string n) :name(n){
    cout<<"The constructor with only 1 parameter has been called"<<endl;
    height = 5;
    boredom = hunger = 0;
    thirst = hunger;
}

Critter :: Critter(string n, int h, int b, double he, double th ): name(n){
    cout<<"The constructor with all parameters has been called"<<endl;
    hunger = (double)h /10;
    boredom = b;
    height = he;
    thirst = th;
}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = (double)newhunger /10;
}

void Critter::print() {
	cout << "I am " << name <<". My hunger level is " << (int)(hunger*10) <<". My boredom = "<<boredom<<" and my height is "<<height <<". Thirst level: "<<thirst << endl;
    //prints the hunger level as int
}

int Critter::getHunger() {
	return (int)(hunger*10);
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
