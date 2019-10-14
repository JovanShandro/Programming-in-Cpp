/*
	CH08-320142
	a3 p4.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#ifndef CRITTER_H
#define CRITTER_H

#include <iostream>
#include <string> // defines standard C++ string class

class Critter{

    private:  // data members are private
        std::string name;
        double hunger;
        int boredom;
        double height;
        double thirst;

    public: // constructors
        Critter();
        Critter(std::string n);
        Critter(std::string n, int h, int b, double he =10);
        Critter(std::string n, int h, int b, double he, double th);
        // setter methods
        void setName(std::string& newname);
        void setHunger(int newhunger);
        void setBoredom(int newboredom);
        //getters
        int getHunger();
        int getBoredom();
        double getHeight();
        std::string getName();
        // service method
        void print();
};

#endif
