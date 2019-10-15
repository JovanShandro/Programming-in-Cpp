/*
    CH08-320143
    a1 p5.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
#include <iostream>
#include "Vector.h"
#include "Matrix.h"
 
using namespace std;
 
Matrix::Matrix()
{
    row = 0;
    col = 0;
    components = NULL;
}
Matrix::Matrix(int r, int c, double** d)
{
    row = r;
    col = c;
    components = new double*[row];
    for(int i = 0; i< row; i++)
        components[i] = new double[col];
    for(int i = 0; i<row; i++)
        for(int j = 0; j<col; j++)
            components[i][j] = d[i][j];
 
}
Matrix::Matrix(const Matrix& m)
{
    row = m.row;
    col = m.col;
    components = m.components;
}
 
Matrix::~Matrix()
{
    if(row !=0 && col!=0)
    {
        for(int i = 0; i< row; i++)
            delete []components[i];
        delete []components;
    }
}
//setters
void Matrix::setRow(int r)
{
    row = r;
}
 
void Matrix::setCol(int c)
{
    col = c;
}
void Matrix::setComponents( double** d)
{
    components = d;
}
int Matrix::getRow() const
{
    return row;
}
int Matrix::getCol() const
{
    return col;
}
void Matrix::getComponents(double** d) const
{
    for(int i = 0; i< row; i++)
        for(int j = 0; j< col; j++)
            d[i][j] = components[i][j];
}
//other
void Matrix::print() const
{
    for(int i = 0; i< row; i++)
    {
        for(int j = 0; j< col; j++)
            cout<< components[i][j] << " ";
        cout<<endl;
    }
}
 
//<< and >>
ostream& operator <<(ostream& os, Matrix & m)
{
    int r = m.row;
    int c = m.col;
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            os<<m.components[i][j];
            if(j != c-1)
            os<<" ";
        }
        os<<endl;
    }
    return os;
}
 
istream& operator >>(istream& is, Matrix & m)
{            
    is>>m.row >> m.col;
    m.components = new double*[m.row];
    for(int i = 0; i<m.row; i++)
        m.components[i] = new double[m.col];
 
    for(int i = 0; i< m.row; i++)
    {
        for(int j = 0; j<m.col; j++)
        {
            is >> m.components[i][j];     
        }
    }
    return is;
}
// matrix times vector
Vector operator * (Matrix& m, Vector& v)
{
if (m.col != v.getSize())
    {
        Vector k;
        cout << "Multiplication can not be performed" << endl;
        return k; //returns an empty vector
    }
    int s = m.row;
    double * c = new double[s];
    double * t = new double[s];
 
    v.getComponents(t);
    for(int i = 0; i<s; i++)
    {
        for(int j = 0; j<v.getSize(); j++)
            c[i] += m.components[i][j] * t[j]; 
    }
    Vector a (s, c);
    return a;
}
//vector times matrix
Vector operator *(Vector& v,Matrix& m)
{
    if(v.getSize() != m.getRow())
    {
        Vector v;
        cout<< "Can't perform multiplication"<<endl;
        return v;
    }
    double ** comp = new double*[m.getRow()];
    for(int i = 0; i<m.getRow(); i++)
        comp[i] = new double[m.getCol()];
 
    double* v_comp = new double[v.getSize()];
    double* res = new double[m.getCol()];
 
    v.getComponents(v_comp);
    m.getComponents(comp);
 
    for(int i = 0; i<m.getRow(); i++)
    {
        for(int j = 0; j<m.getCol(); j++)
        {
            res[j] += v_comp[i] * comp[i][j];
        }
    }
    Vector r(m.getCol(), res);
    return r;
}