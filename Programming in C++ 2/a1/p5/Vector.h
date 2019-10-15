/*
    CH08-320142
    a1 p5.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
#ifndef VECTOR_H
#define VECTOR_H
 
#include <iostream>
#include "Matrix.h"
 
 
class Vector
{
    private:
        int Size;
        double *components;
    public:
        Vector();
        Vector(int, double*);
        Vector(const Vector&);
        ~Vector();
        //setters
        void setSize(const int);
        void setComponents( double*);
        int getSize() const;
        void getComponents(double*) const;
        //other
        void print() const;
        double norm() const;
        double scalar(const Vector&) const;
        Vector add(const Vector) const;
        Vector subtract(const Vector) const;
        // << and >>
        friend std::ostream& operator <<(std::ostream& os, Vector &);
        friend std::istream& operator >>(std::istream& is, Vector &);
       
};
 
#endif