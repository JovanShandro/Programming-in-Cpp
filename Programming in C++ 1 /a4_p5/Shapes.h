/*
	CH08-320142
	a4 p5.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <iostream>
#include <string>

using namespace std;

class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		string name;   // every shape will have a name
	public:
		Shape(const string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
		//setters
		void setName(string&);
		//getters
		string getName();
};

class CenteredShape : public Shape {  // inherits from Shape
	protected:
		double x,y;  // the center of the shape
	public:
		CenteredShape(const string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		//setters
		void setX(double);
		void setY(double);
		//getter
		double getX();
		double getY();
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	protected:
		int EdgesNumber;
	public:
		RegularPolygon(const string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
		//setters
		void setEdgesNumber(int);
		//getters
		int getEdgesNumber();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const string&, double, double, double);
		Circle();
		Circle(const Circle&);
		//setters
		void setRadius(double);
		//getters
		double getRadius();
		//perimeter and area
		double perimeter();
		double area();
};

class Rectangle : public RegularPolygon{
    private :
        double height;
        double width;
    public:
        Rectangle(const string& n, double nx, double ny, double nwidth, double nheight);
        Rectangle();
        Rectangle(const Rectangle&);
        //setters
        void setHeight(double);
        void setWidth(double);
        //getters
        double getHeight();
        double getWidth();
        //perimeter and area
        double perimeter();
		double area();
};

class Square : public Rectangle{
    private :
        double side;
    public:
        Square(const string& n, double nx, double ny, double nside);
        Square();
        Square(const Square&);
        //setters
        void setSide(double);
        //getters
        double getSide();
        //perimeter and area
        double perimeter();
		double area();
};

#endif
