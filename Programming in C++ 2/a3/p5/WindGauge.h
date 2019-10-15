/*
    CH08-320143
    a3 p5.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#ifndef WIND_H
#define WIND_H
 
#include <iostream>
#include <deque>
 
class WindGauge
{
    public:
        WindGauge(int period = 10);
        void currentWindSpeed(int speed);
        int highest() const;
        int lowest() const;
        int average() const;
        void dump();
    private:
        int period;
        //the history of wind speeds
        std::deque<int> history;
};
 
#endif