/*
    CH08-320143
    a4 p6.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#ifndef ACCESS_H
#define ACCESS_H
 
#include <iostream>
#include <map>
 
class Access 
{
    public:
        void activate(unsigned long code, unsigned int level);
        void deactivate(unsigned long code);
        bool isactive(unsigned long code, unsigned int level) const;
    private:
        std::map<unsigned long, unsigned int> codes;
};
 
#endif