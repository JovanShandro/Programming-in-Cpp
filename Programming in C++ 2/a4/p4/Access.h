/*
    CH08-320143
    a4 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#ifndef ACCESS_H
#define ACCESS_H
 
#include <iostream>
#include <set>
 
class Access 
{
    public:
        void activate(unsigned long code);
        void deactivate(unsigned long code);
        bool isactive(unsigned long code) const;
    private:
        std::set<unsigned int> codes;
};
 
#endif