/*
	CH08-320142
	a4 p5.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std;

//Shape
Shape::Shape() {
    name = "default_name";
}

Shape::Shape(const string& n) : name(n) {
}

Shape::Shape(const Shape& s){
    name = s.name;
}

void Shape::printName() const {
	cout << name << endl;
}

void Shape::setName(string& newname){
    name = newname;
}

string Shape::getName(){
    return name;
}

//CenteredShape
CenteredShape::CenteredShape(): Shape() {
	x = y =0;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape(const CenteredShape &c){
    x = c.x;
    y = c.y;
    name = c.name;
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

//RegularPolygon
RegularPolygon::RegularPolygon() :	CenteredShape(){
	EdgesNumber = 3;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon(const RegularPolygon& r){
    EdgesNumber = r.EdgesNumber;
    x=r.x;
    y=r.y;
    name=r.name;
}

void RegularPolygon::setEdgesNumber(int n){
    EdgesNumber = n;
}

int RegularPolygon::getEdgesNumber(){
    return EdgesNumber;
}

//Circle
Circle::Circle() : CenteredShape(){
	Radius = 1;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny){
	Radius = r;
}

Circle::Circle(const Circle& c){
    Radius = c.Radius;
    x=c.x;
    y=c.y;
    name=c.name;
}

void Circle::setRadius(double r){
    Radius = r;
}

double Circle::getRadius(){
    return Radius;
}

double Circle::perimeter(){
    return (2*Radius*M_PI);
}

double Circle::area(){
    return (M_PI*Radius*Radius);
}

//Rectangle
Rectangle::Rectangle() : RegularPolygon(){
    height = 1;
    width = 1;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) :
    RegularPolygon(n, nx, ny, 4) {
    width = nwidth;
    height = nheight;
}

Rectangle::Rectangle(const Rectangle& r){
    height = r.height;
    width = r.width;
    x=r.x;
    y=r.y;
    name=r.name;
}

void Rectangle::setHeight(double h){
    height = h;
}

void Rectangle::setWidth(double w){
    width = w;
}

double Rectangle::getHeight(){
    return height;
}

double Rectangle::getWidth(){
    return width;
}

double Rectangle::perimeter(){
    return 2*(width + height);
}

double Rectangle::area(){
    return width*height;
}
//Square
Square::Square() : Rectangle(){
    side = 1;
}

Square::Square(const string& n, double nx, double ny, double nside) :
    Rectangle( n, nx, ny, nside, nside){
    side = nside;
}

Square::Square(const Square& s){
    side = s.side;
    x=s.x;
    y=s.y;
    name=s.name;
}

void Square::setSide(double s){
    side = s;
}

double Square::getSide(){
    return side;
}

double Square::perimeter(){
    return 4*side;
}

double Square::area(){
    return side*side;
}
