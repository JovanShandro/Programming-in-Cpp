/*
    CH08-320142
    a6 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

Area::Area(std::string n) { color = n; }

Area::~Area() {}

string Area::getColor() { return color; }
