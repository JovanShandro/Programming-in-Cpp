/*
    CH08-320142
    a6 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(std::string n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {}

double Circle::area() const {
	return (radius * radius * M_PI);
}

double Circle::perimeter() const {
	return (2 * radius * M_PI);
}