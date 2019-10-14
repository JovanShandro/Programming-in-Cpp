/*
    CH08-320142
    a4 p1.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    int n,i;
    double h,w,d;

    cout<<"Enter the number of boxes: "<<endl;
    cin>>n;

    Box *boxes = new Box[2*n];
    for(i=0; i<n; i++)
    {
        cout<<"Enter the height of box "<<i+1<<":"<<endl;
        cin>>h;
        boxes[i].setHeight(h);

        cout<<"Enter the width of box "<<i+1<<":"<<endl;
        cin>>w;
        boxes[i].setWidth(w);

        cout<<"Enter the depth of box "<<i+1<<":"<<endl;
        cin>>d;
        boxes[i].setDepth(d);
    }

    for(i=n; i<2*n; i++)
    {
        boxes[i] = boxes[i-n];
    }

    for(i=0; i<2*n; i++)
    {
        cout<<"Volume of box "<<i+1<<" is "<<boxes[i].volume()<<endl;
    }

    delete []boxes;
    return 0;
}
