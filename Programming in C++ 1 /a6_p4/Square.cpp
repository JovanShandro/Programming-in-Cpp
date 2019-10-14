/*
    CH08-320142
    a6 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
#include "Square.h"

Square::Square(std::string n, double a) 
            : Area(n),Rectangle(n,a,a) {
    side = a;
}

Square::~Square() {}

double Square::area() const { return (side * side); }

double Square::perimeter() const { return (4*side); }