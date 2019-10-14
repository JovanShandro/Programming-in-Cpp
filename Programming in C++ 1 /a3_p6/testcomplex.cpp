/*
	CH08-320142
	a3 p6.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	int r;
    Complex a, b,c;

    //getting the input from the user
    cout<<"Enter the real part of the first number:"<<endl;
    cin>>r;
    a.setRe(r);

    cout<<"Enter the imaginary part of the first number:"<<endl;
    cin>>r;
    a.setIm(r);

    cout<<"Enter the real part of the second number:"<<endl;
    cin>>r;
    b.setRe(r);

    cout<<"Enter the imaginary part of the second number:"<<endl;
    cin>>r;
    b.setIm(r);

    cout<<"The 2 instances are: "<<endl;

    a.print();
    b.print();

    cout<<"The conjugate of the first :"<<endl;
    c = a.conjugate();
    c.print();

    cout<<"Their sum :"<<endl;
    c = a.add(b);
    c.print();

    cout<<"The difference second minus first:"<<endl;
    c = b.subtract(a);
    c.print();

    cout<<"Their product:"<<endl;
    c = a.multiply(b);
    c.print();


    return 0;
}
