/*
    CH08-320142
    a1 p5.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include <fstream>
#include "Vector.h"
#include "Matrix.h"
 
using namespace std;
 
 
/* 
    When multiplying a vector with a matrix
    the vector is considered as a row vector.
    When calculating the product of a matrix 
    with a vector then the vector is considered
    as a column one;
*/
 
int main()
{
    ifstream f1, f2, f3, f4;
    ofstream o1, o2;
 
    //f1 contains a vector
    f1.open("in1.txt", ios::in);
    if(!f1.is_open())
        exit(1);
    //f2 contains a vector
    f2.open("in2.txt", ios::in);
    if(!f2.is_open())
        exit(2);
    //f3 contains a matrix 
    f3.open("in3.txt", ios::in);
    if(!f3.is_open())
        exit(3);
    //f4 contains a matrix
    f4.open("in4.txt", ios::in);
    if(!f4.is_open())
        exit(4);
    //o1 will store the mult results
    o1.open("out1.txt", ios::out);
    if(!o1.is_open())
        exit(5);
    //o2 will store a matrix to test << operator
    o2.open("out2.txt", ios::out);
    if(!o2.is_open())
        exit(6);
 
    //reading vectors and matrices
    Vector v1, v2;
    Matrix m1, m2;
    f1>>v1;
    f2>>v2;
 
    cout<<"The first read vector: "<<endl;
    v1.print();
    cout<<"The second read vector: "<<endl;
    v2.print();
 
    //reading matrices
    f3 >>m1;
    f4 >>m2;
    //writing them on a file
    o2 << m1 <<endl <<  m2<<endl;
    //Print them
    cout<<"The first read matrix: "<<endl;
    m1.print();    
    cout<<"The second read matrix: "<<endl;
    m2.print();
    
    Vector prod1 = m1 * v1;
    cout<<"The result of the first multiplication: "<<endl;
    prod1.print();
 
    Vector prod2 = (v1 * m2);
    cout<<"The second read matrix: "<<endl;
    prod2.print();
    
    //writing products on the file
    o1 << prod1 << endl << prod2;
    //closing files
    o1.close();
    o2.close();
    f1.close();
    f2.close();
    f3.close();
    f4.close();
 
    return 0;
}