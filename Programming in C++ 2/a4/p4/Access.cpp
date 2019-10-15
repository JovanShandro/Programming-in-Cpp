/*
    CH08-320143
    a4 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <set>
#include "Access.h"
 
void Access::activate(unsigned long code)
{
    codes.insert(code);
}
 
void Access::deactivate(unsigned long code)
{
    codes.erase(code);
}
 
bool Access::isactive(unsigned long code) const
{
    for(auto it = codes.begin(); it != codes.end(); it++)
    {
        if(*it == code)
            return true;
    }
    return false;
}