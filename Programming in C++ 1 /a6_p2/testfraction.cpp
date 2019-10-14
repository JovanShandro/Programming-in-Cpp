/*
    CH08-320142
    a6 p2.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
    Fraction a,b,c,d;
    cin>>a;
    cin>>b;

     c = a + b;
     d = a - b;

    //determines the greatest and prints it
    if(a>b){
        cout<<a<<endl;
    }else if(a<b){
        cout<<b<<endl;
    }
    //prints the sum and difference
    cout<<c<<endl;
    cout<<d<<endl;

    return 0;
}
