/*
	CH08-320142
	a4 p4.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;

//Creature class
Creature::Creature(): distance(10){
	cout << "Creature constructer called" << endl;
}

Creature::~Creature(){
	cout << "Creature deconstructer called" << endl;
}

void Creature::run() const{
    cout << "running " << distance << " meters!\n";
}

//Wizard class
Wizard::Wizard() : distFactor(3){
	cout << "Wizard constructor called" << endl;
}

Wizard::~Wizard(){
	cout << "Wizard deconstructor called" << endl;
}

void Wizard::hover() const{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//Elf class
Elf::Elf() : speed(3){
	cout << "Elf constructor called" << endl;
}

Elf::~Elf(){
	cout << "Elf deconstructor called" << endl;
}

void Elf::walk() const{
    cout << "running " << distance << " meters at speed " << speed << endl;
}

//Alien class
Alien::Alien() : brainMass(3000){
	cout << "Alien constructor called" << endl;
}

Alien::~Alien(){
	cout << "Alien deconstructor called" << endl;
}

void Alien::alienate() const{
    cout << "running " << distance << " meters. Brain mass : " << brainMass << endl;
}
