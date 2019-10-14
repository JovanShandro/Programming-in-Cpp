/*
    CH08-320142
    a6 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle {
	public:
		Ring(std::string n, double outer, double inner);
		~Ring();
		double area() const;
		double perimeter() const;
	protected:
		double inner;
};

#endif