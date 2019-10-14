/*
    CH08-320142
    a6 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include "Area.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Ring.h"
#include "Square.h"

using namespace std;

int main()
{
    int random, obj_id;
    string colors[4]= {"RED","BLACK","BLUE","VIOLET"};
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Main loop
    for(int count = 0; count < 25; count++)
    {
        random = (rand() % 4);
        obj_id = (rand() % 4);
        
        if(obj_id==0) // Rectangle
        {
            //Get 2 random nrs
            int obj1=(rand() % 95)+5;
            int obj2=(rand() % 95)+5;
            //Create rect and print perim and area
            Rectangle a(colors[random], (double)obj1, (double)obj2);
            cout<<"Rectangle "<<colors[random]<<" Perimeter: "
                <<a.perimeter()<<" Area: "<<a.area()<<endl;
        }else if(obj_id==1) // Square
        {
            int obj1=(rand() % 95)+5;
            Square a(colors[random], (double)obj1);
            cout<<"Square "<<colors[random]<<" Perimeter: "
                <<a.perimeter()<<" Area: "<<a.area()<<endl;
        }
        else if(obj_id==2) //Circle
        {
            int obj1=(rand() % 95)+5;
            Circle a(colors[random], (double)obj1);
            cout<<"Circle "<<colors[random]<<" Perimeter: "
                <<a.perimeter()<<" Area: "<<a.area()<<endl;
        }
        else if(obj_id==3) //Ring
        {
            int obj1=(rand() % 95)+5;
            int obj2=(rand() % 95)+5;
            if(obj1<obj2)
                swap(obj1, obj2);
            // Create ring and print perim and area
            Ring a(colors[random], (double)obj1, (double)obj2);
            cout<<"Ring "<<colors[random]<<" Perimeter: "
                <<a.perimeter()<<" Area: "<<a.area()<<endl;
        }
    }
    return 0;
}
