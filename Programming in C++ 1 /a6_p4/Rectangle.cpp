/*
    CH08-320142
    a6 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/


#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(std::string n, double a, double b) : Area(n) {
    height = a;
    width = b;
}

Rectangle::~Rectangle() {}

double Rectangle::area() const { return (height*width); }

double Rectangle::perimeter() const { return ((2*height)+(2*width)); }