/*
	CH08-320142
	a3 p3.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include <string> // defines standard C++ string class

using namespace std;

class Critter{

    private:  // data members are private
        string name;
        double hunger;
        int boredom;
        double height;

    public: // constructors
        Critter();
        Critter(string n);
        Critter(string n, int h, int b, double he =10);
        // setter methods
        void setName(string& newname);
        void setHunger(int newhunger);
        void setBoredom(int newboredom);
        //getters
        int getHunger();
        int getBoredom();
        double getHeight();
        string getName();
        // service method
        void print();
};
