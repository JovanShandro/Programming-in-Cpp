/*
    CH08-320143
    a2 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include "LinkedList.h"
 
using namespace std;
 
int main()
{
    LinkedList <int> l;
    //testing adding in beginning and end
    l.add_beg(3);
    l.add_beg(4);
    l.add_beg(5);
    l.add_end(8);
    l.print();
    //testing getSize()
    cout<<"The size is: " << l.getSize()<<endl;
    /* testing the methods returning first 
      and last without removing them */
    cout<<"The first is: " << l.first()<<endl;
    cout<<"The last is: " << l.last()<<endl;
    /* testing the methods returning first 
      and last removing them */
    cout<<"The first that is removed: " << l.first_rem() << endl;
    cout<<"The last that is removed: " << l.last_rem() << endl;
    //print list to check
    cout<< "The list now is: " << endl;
    l.print();
    //checking copy constructor
    LinkedList <int> h(l);\
    cout<<"Printing the copy:\n";
    h.print();
 
    return 0;
}