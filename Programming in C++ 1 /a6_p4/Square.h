/*
    CH08-320142
    a6 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle
{
	public:
		Square(std::string n, double a);
		~Square();
		double area() const;
		double perimeter() const;
	protected:
		double side;
};

#endif