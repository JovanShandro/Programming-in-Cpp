/*
    CH08-320143
    a4 p6.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include <map>
#include "Access.h"
using namespace std;
 
int main()
{
    int x;
    Access a;
    //activate the codes
    a.activate(123456, 1);
    a.activate(999999, 5);
    a.activate(187692, 9);
    //ask user for code and check if door opens
    while(true)
    {
        cin >> x;
        if(a.isactive(x, 5))
        {
            cout<<"The door opened successfully."<<endl;
            break;
        }
        else
            cout<<"The door  did not open."<<endl;
 
    }
    //deactivate the code that worked and 999999, activate 111111
    a.deactivate(x);
    a.activate(999999, 8);
    a.activate(111111, 7);
    //again repeating steps 3 and 4 till door opens
    while(true)
    {
        cin >> x;
        if(a.isactive(x, 7))
        {
            cout<<"The door opened successfully."<<endl;
            break;
        }
        else
            cout<<"The door  did not open."<<endl;
 
    }
 
    cout<<endl;
    return 0;
}