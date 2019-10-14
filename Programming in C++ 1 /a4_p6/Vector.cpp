#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

Vector::Vector(){}

void Vector::setSize(int n)
{
    size=n;
}

Vector::Vector(double *x)
{
    components=new double[size];
    for(int i=0;i<size;i++)
    {
        components[i]=x[i];
    }
}

Vector::Vector(const Vector& x)
{
    components=new double[size];
    for(int i=0;i<size;i++)
    {
        components[i]=x.components[i];
    }
}

Vector::~Vector()
{
    cout<<"Destroying a vector"<<endl;
    delete []components;
}

void Vector::print()
{
    for(int i=0;i<size;i++)
    {
        if(i==0)
        {
            cout<<"("<<components[i]<<", ";
        }
        else if(i==(size-1))
        {
            cout<<components[i]<<")"<<endl;
        }
        else
        {
            cout<<components[i]<<", ";
        }
    }
}

void Vector::setComponents(double *q)
{
    components= new double[size];
    for(int i=0; i<size; i++)
        components[i] = q[i];
}

void Vector::getComponents(double* q)
{
    for (int i = 0; i<size; i++)
        q[i] = components[i];
}

Vector Vector::add(const Vector &v)
{
    Vector b;
    double *comp;
    comp = new double[size];
    for(int i=0;i<size;i++)
        comp[i]=components[i]+v.components[i];
    // Set the props of the vector
    b.size=size;
    b.setComponents(comp);
    // Delete the allocated memory
    delete []comp;
    return b;
}

double Vector::norm()
{
    double s=0;
    for(int i=0;i<size;i++)
        s+=components[i]*components[i];

    s=sqrt(s);
    return s;
}

Vector Vector::diff(const Vector &x)
{
    Vector a;
    double *tmp;
    //Allocate mem for tmp
    tmp = new double[size];
    for(int i=0;i<size;i++)
        tmp[i]=components[i]-x.components[i];

    a.size=size;
    a.setComponents(tmp);
    // Deallocate memory
    delete []tmp;
    return a;
}

double Vector::product(const Vector &x)
{
    double s=0;
    for(int i=0;i<size;i++)
    {
        s+=components[i]*x.components[i];
    }
    return s;
}