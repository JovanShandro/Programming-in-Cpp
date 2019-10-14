/*
	CH08-320142
	a5 p1.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std;

Shape::Shape(){
    //nothing
}

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

void Shape::setName(std::string& newname){
    name = newname;
}

std::string Shape::getName(){
    return name;
}
//centred Shape class
CenteredShape::CenteredShape(){
    //nothing
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

void CenteredShape::setX(double newx){
    x = newx;
}

void CenteredShape::setY(double newy){
    y = newy;
}

double CenteredShape::getX(){
    return x;
}

double CenteredShape::getY(){
    return y;
}

//regular Polygon class
RegularPolygon::RegularPolygon(){
    //nothing
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}

void RegularPolygon::setEdgesNumber(int n){
    EdgesNumber = n;
}

int RegularPolygon::getEdgesNumber(){
    return EdgesNumber;
}
//Circle class
Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
}

//Hexagon class
Hexagon::Hexagon(const std::string& name, double nx, double ny, double nside, const std::string& ncolor) :
   RegularPolygon(name, nx, ny, 6),Color(ncolor){
    Side = nside;
}

Hexagon::Hexagon(const Hexagon& h){
    Side = h.Side;
    Color = h.Color;
    x = h.x;
    y = h.y;
    name = h.name;
}

Hexagon::~Hexagon(){
    //empty destructor
}

void Hexagon::setSide(double ns){
    Side = ns;
}
void Hexagon::setColor(std::string& ncolor){
    Color = ncolor;
}

double Hexagon::getSide(){
    return Side;
}

std::string Hexagon::getColor(){
    return Color;
}

double Hexagon::perimeter(){
    return 6*Side;
}

double Hexagon::area(){
    return (1.5 * sqrt(3)*Side*Side);
}
