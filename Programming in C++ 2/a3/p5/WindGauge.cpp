/*
    CH08-320143
    a3 p5.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include <deque>
#include "WindGauge.h"
 
using namespace std;
 
//constructor
WindGauge::WindGauge(int period)
{
    this->period = period;
}
//add speed to history
void WindGauge::currentWindSpeed(int speed)
{
    history.push_back(speed);
    if((int)history.size() > period)
        history.pop_front();
}
//returns the highest wind speed
int WindGauge::highest() const
{
    int high = history[0];
    for(int i = 0; i < (int)history.size(); i++)
    {
        if(high <history[i])
            high = history[i];
    }
    return high;
}
//returns the lowest wind speed
int WindGauge::lowest() const
{
    int low = history[0];
    for(int i = 0; i < (int)history.size(); i++)
    {
        if(low > history[i])
            low = history[i];
    }
    return low;
}
//returns the average wind speed
int WindGauge::average() const
{
    double avg;
    int sum = 0;
    for(auto it = history.begin(); it != history.end(); it++)
        sum += *it;
    avg = (double) sum / (int)history.size();
    return avg;
}
//prints lowest, highest, and average
void WindGauge::dump()
{
    if(!history.empty())
    {
        cout <<"Lowest equals " << this->lowest()<<endl;
        cout <<"Highest equals " << this->highest()<<endl;
        cout <<"Average equals " << this->average()<<endl;
    }
}