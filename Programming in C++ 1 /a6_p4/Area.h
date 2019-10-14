/*
    CH08-320142
    a6 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#ifndef _AREA_H
#define _AREA_H

#include<string>

class Area {
	public:
		Area(std::string n);
		virtual ~Area();
		std::string getColor();
		virtual double area() const = 0;
		virtual double perimeter() const = 0;
	protected:
		std::string color;
};
#endif
