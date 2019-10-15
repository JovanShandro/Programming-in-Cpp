/*
    CH08-320143
    a1 p1.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

int main()
{
    ifstream in1, in2;
    ofstream out("output.txt", ios::out);
    //declare complex instances
    Complex c1, c2;
    //opening first input file
    in1.open("in1.txt", ios::in);
    if(!in1.is_open())
        exit(1);
    //opening second input file
    in2.open("in2.txt", ios::in);
    if(!in2.is_open())
        exit(2);
    //reading the complex numbers from files
    in1 >> c1;
    in2 >> c2;
    //calculating sum difference and product
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1*c2;
    //writing them in output file
    out<< "The sum is : "<<sum;
    out<< "The difference is : "<<diff;
    out<< "The product is : "<<prod;
    //print the values also on the standard output
    cout<< "The sum is : "<<sum;
    cout<< "The difference is : "<<diff;
    cout<< "The product is : "<<prod;
    //close files
    in1.close();
    in2.close();
    out.close();

    cout<<endl;
    return 0;
}
