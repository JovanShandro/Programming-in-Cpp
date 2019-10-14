/*
    CH08-320142
    a6 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"

class Rectangle : public virtual Area {
	public:
		Rectangle(std::string n, double a, double b);
		~Rectangle();
		double area() const;
		double perimeter() const;
	protected:
		double height;
		double width;
};

#endif