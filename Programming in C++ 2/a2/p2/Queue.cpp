/*
    CH08-320143
    a2 p2.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
#include "Queue.h"
 
using namespace std;
 
int main()
{
    int a;
    Queue<int> q(11);
 
    cout<<"Testing push :" << endl;
    for(int i = 1; i<12; i++)
        q.push(i);
    q.print();
    //testing pop
    cout<<"Testing pop: "<<endl;
    for(int i = 0; i< 11; i++)
    {
        q.pop(a);
        cout<< " Just popped " << a<<endl;
    }
    q.print();
    //testing .back() and .front()
    cout << "Pushing 44 and then 4"<< endl;
    q.push(44);
    q.push(4);
    q.push(12);
    q.push(121);
    q.push(115);
 
    q.print();
    cout << "Data in the back: " << q.back() << endl;
    cout << "Data in the front: " << q.front() << endl;
    //testing getNumEntries
    cout<< "Number of entries = " << q.getNumEntries()<<endl;
 
    return 0;
}