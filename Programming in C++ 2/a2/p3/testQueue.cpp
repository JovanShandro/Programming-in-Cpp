/*
    CH08-320143
    a2 p3.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include "Queue.h"
 
using namespace std;
 
int main()
{
    Queue<int> q(11);
 
    cout<<"Testing push :" << endl;
    for(int i = 3; i<12; i++)
        q.push(i);
    q.print();
    //testing resize and size
    cout << "Now the size is: "<<q.getSize() << endl;
    cout << "After resize: " << endl; 
    q.resize(4);
    //print the queue again
    q.print();
    cout << "Now the size is : "<<q.getSize() << endl;
    //the 2 push-es will not do anything as the queue is full
    //as size is now 4 
    q.push(2);
    q.push(2);
    //print to check is elements were added
    q.print();
 
    return 0;
}