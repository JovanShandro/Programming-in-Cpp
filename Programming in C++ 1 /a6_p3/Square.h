/*
    CH08-320142
    a6 p3.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
#ifndef _SQUARE_H
#define _SQUARE_H
#include <iostream>
#include "Rectangle.h"

class Square : public Rectangle {
    public:
		Square(const char *n, double s);
		~Square();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double side;
};

#endif // _SQUARE_H
