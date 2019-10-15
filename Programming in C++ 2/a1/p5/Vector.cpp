/*
    CH08-320142
    a1 p5.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include <cmath>
#include "Vector.h"
#include "Matrix.h"
 
using namespace std;
 
Vector::Vector()
{
    components = NULL;
    Size = 0;
}
 
Vector::Vector(int s, double* c){
    int i;Size = s;
    components = new double[Size];
    for(i =0; i<Size; i++){
        components[i] = c[i];
    }
}
 
Vector::Vector(const Vector& v){
    Size = v.Size;int i;
    components = new double[v.Size];
    for(i =0; i<Size; i++){
        components[i] = v.components[i];
    }
}
 
Vector::~Vector()
{
    if (Size != 0)
        delete []components;
}
 
//setters
void Vector::setSize(const int s){
    Size = s;
}
 
void Vector::setComponents( double* c){
   components = c;
}
 
//getters
int Vector::getSize() const{
    return Size;
}
 
void Vector::getComponents(double * joi) const{
    int i;
    for(i=0 ;i<Size; i++){
        joi[i] = components[i];
    }
}
 
//other
void Vector::print() const{
    int i;
    for(i=0; i<Size; i++){
       std::cout<<" "<<components[i];
    }
    std::cout<<std::endl;
}
 
double Vector::norm() const{
    int i;
    double d=0;
    for(i=0; i<Size; i++){
        d+=(components[i] * components[i]);
    }
    d = sqrt(d);
    return d;
}
 
double Vector::scalar(const Vector& v) const{
    int i;
    double d=0;
    for(i=0; i<Size; i++){
        d+=(components[i] * v.components[i]);
    }
    return d;
}
 
Vector Vector::add(const Vector v) const{
 
    int i;
    Vector a;
 
    double *components2 = new double[Size];
    for(i=0; i<Size; i++){
        components2[i] = v.components[i] + components[i] ;
    }
    a.setSize(Size);
    a.setComponents(components2);
    return a;
}
 
Vector Vector::subtract(const Vector v) const{
    int i ;
    Vector a;
 
    double *components2 = new double[Size];
    for(i=0; i<Size; i++){
        components2[i] = (components[i] - v.components[i]);
    }
    a.setSize(Size);
    a.setComponents(components2);
    return a;
}
 
//<< and >> overloading
 
ostream& operator <<(ostream& os, Vector & v)
{
    int s = v.Size;
    os<<"[";
    for(int i = 0; i<s; i++)
    {
        os<<v.components[i];
        if(i != s-1)
            os<<" ";
    }
    os<<"]"<<endl;
    return os;
}
 
istream& operator >>(istream& is, Vector & v)
{
    is>>v.Size;
    v.components = new double[v.Size];
 
    for(int i = 0; i< v.Size; i++)
    {
        is >> v.components[i] ;
    }
    return is;
}
/*
Matrix Vector::operator *(Matrix& m)
{
    if(this->Size != m.row)
    {
        Matrix m;
        cout<< "Can not perform multiplication"<<endl;
        return m;
    }
    double ** comp = new double*[m.row];
    for(int i = 0; i<m.row; i++)
        comp[i] = new double[m.col];
 
    for(int i = 0; i<m.row; i++)
    {
        for(int j = 0; j<m.col; j++)
        {
            comp[i][j] = this->components[i] * m.components[i][j];
        }
    }
    Matrix result(m.row, m.col, comp);
    return result;
}
*/