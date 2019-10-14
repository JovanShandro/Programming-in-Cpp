/*
	CH08-320142
	a5 p1.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	protected:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;
		//setters
		void setName(std::string&);
		//getters
		std::string getName();
};

class CenteredShape : public Shape {  // inherits from Shape
	protected:
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
		//setters
        void setX(double);
		void setY(double);
		//getters
		double getX();
		double getY();
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	protected:
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
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
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Hexagon : public RegularPolygon {
    private:
        double Side;
        std::string Color;
    public:
        //constructors
        Hexagon(const std::string&, double, double,double , const std::string&);
        Hexagon(const Hexagon&);
        ~Hexagon();
        //setters
        void setSide(double);
        void setColor(std::string&);
        //getters
        double getSide();
        std::string getColor();
        //others
        double perimeter();
        double area();
};

#endif
