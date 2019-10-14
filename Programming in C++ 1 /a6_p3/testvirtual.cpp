/*
    CH08-320142
    a6 p3.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const int num_obj = 7;

int main() {
	Area *list[num_obj];						// (1)
	int index = 0;								// (2)
	double sum_area = 0.0;						// (3)
	double sum_per = 0.0;

	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)

	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);

	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);

	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);

	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);

	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);

	cout << "Creating Square: ";
	Square purple_square("PURPLE",15);

	list[0] = &blue_ring;						// (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;                      //there was no (6)
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &purple_square;

	while (index < num_obj) {					// (7)
		(list[index])->getColor();
		double area = list[index]->calcArea();// (8)
		double perimeter = list[index++]->calcPerimeter();
		sum_area += area;
		sum_per += perimeter;
	}

	cout << "\n\nThe total area is " << sum_area << " units " << endl;	// (9)
	cout << "\nThe total perimeter is " << sum_per << " units"<<endl;

	return 0;
}


/*
                        ______________
                       |              |
                       |     Area     |
                       |______________|
                              |
                  ____________|____________
                 |                         |
           ______________           ______________
          |              |         |              |
          |    Circle    |         |   Rectangle  |
          |______________|         |______________|
                 |                         |
           ______________           ______________
          |              |         |              |
          |     Ring     |         |    Square    |
          |______________|         |______________|

    (1) declaring an array of pointers of Area objects
    (2) initializing index to 0 to keep track of the object of the list that we are using
    (3) initializing a variable to keep tract of the sum of areas of the object. Initialized to 0
    (4)creating an instance of a ring object setting its colour to blue and outer and inner radii to 5 and 2
    (5)assigning the blue_ring object to the first spot of the list
     --There was no (6)
    (7) loop through all elements of he list as index variable will take all values from 0 to the index of the last object of the list
    (8) get the area of the current object and increase index to get to the next one
    (9) prints the sum of all the areas
*/
