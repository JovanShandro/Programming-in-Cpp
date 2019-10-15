/*
    CH08-320143
    a4 p6.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <map>
#include "Access.h"
 
void Access::activate(unsigned long code, unsigned int level)
{
    codes[code] = level;
}
 
void Access::deactivate(unsigned long code)
{
    codes.erase(code);
}
 
bool Access::isactive(unsigned long code, unsigned int level) const
{
    auto it = codes.find(code);
 
    if(it != codes.end())
    {
        if (it -> second >= level)
            return true;        
    } 
    return false;
 
}