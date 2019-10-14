/*
	CH08-320142
	a4 p6.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
private:
    double *components;
    int size;
public:
    Vector();
    Vector(double*);
    Vector(const Vector&);
    ~Vector();
    void print();
    void setComponents(double*);
    void setSize(int);
    void getComponents(double*);
    Vector add(const Vector&);
    double norm();
    Vector diff(const Vector&);
    double product(const Vector&);
};

#endif // VECTOR_H
