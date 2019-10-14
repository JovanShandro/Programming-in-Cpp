/*
    CH08-320142
    a6 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include <string.h>
#include "Ring.h"

Ring::Ring(std::string n, double outer, double inner)
			: Area(n), Circle(n, outer) {
	this->inner = inner;
}

Ring::~Ring() {}

double Ring::area() const {	return (Circle::area()-(this->inner * this->inner * M_PI)); }

double Ring::perimeter() const { return (Circle::perimeter()-(2 * this->inner * M_PI)); }