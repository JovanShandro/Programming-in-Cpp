/*
	CH08-320142
	a5 p1.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

int main() {

    Hexagon h1("H1",0,0,9,"blue"), h2("H2",0,0,15,"green"), h3(h2);

    //print the perimeters
    cout << "The perimeters are:" << endl;
    cout << "Hexagon 1 --> "<< h1.perimeter() << endl;
    cout << "Hexagon 2 --> "<< h2.perimeter() << endl;
    cout << "Hexagon 3 --> "<< h3.perimeter() << endl;

    //print the areas
    cout << "\nThe areas are:" << endl;
    cout << "Hexagon 1 --> "<< h1.area() << endl;
    cout << "Hexagon 2 --> "<< h2.area() << endl;
    cout << "Hexagon 3 --> "<< h3.area() << endl;

    cout << endl;
    return 0;
}
