/*
    CH08-320143
    a3 p5.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include "WindGauge.h"
 
using namespace std;
 
int main()
{
    WindGauge wg;
    //add 5 values and dump
    wg.currentWindSpeed(14);
    wg.currentWindSpeed(16);
    wg.currentWindSpeed(13);
    wg.currentWindSpeed(15);
    wg.currentWindSpeed(15);
    wg.dump();
    //empty line
    cout<<endl;
    //add 8 more values and dump again
    wg.currentWindSpeed(15);
    wg.currentWindSpeed(17);
    wg.currentWindSpeed(17);
    wg.currentWindSpeed(16);
    wg.currentWindSpeed(20);
    wg.currentWindSpeed(15);
    wg.currentWindSpeed(16);
    wg.currentWindSpeed(20);
    wg.dump();
 
    return 0;
}