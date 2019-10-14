/*
	CH08-320142
	a4 p5.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
using namespace std;

int main(int argc, char** argv) {

  Circle c("Circle", 3, 3, 1);
  Rectangle r("Rectangle", 1, 1, 5,4);
  Square s("Square", 2, 2, 3);

  cout<<"The perimeter of a circle with radius 1 is "<<c.perimeter()<<" and its area is "<<c.area()<<endl;
  cout<<"The perimeter of a rectangle with sides 5 and 4 is "<<r.perimeter()<<" and its area is "<<r.area()<<endl;
  cout<<"The perimeter of a square with side 3 is "<<s.perimeter()<<" and its area is "<<s.area()<<endl;


  return 0;
}
