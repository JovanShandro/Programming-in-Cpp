/*
    CH08-320142
    a1 p5.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
#ifndef MATRIX_H
#define MATRIX_H
 
#include <iostream>
 
class Vector;
 
class Matrix
{    
    private:
        int row;
        int col;
        double **components;
    public:
        Matrix();
        Matrix(int, int, double**);
        Matrix(const Matrix&);
        ~Matrix();
        //setters
        void setRow(int);
        void setCol(int);
        void setComponents( double**);
        int getRow() const;
        int getCol() const;
        void getComponents(double**) const;
        //other
        void print() const;
        //<< and >>
        friend std::ostream& operator <<(std::ostream& os, Matrix &);
        friend std::istream& operator >>(std::istream& is, Matrix &);
        //multiplication with vector
        friend Vector operator *(Matrix& m, Vector& v);
        friend Vector operator *(Vector& v, Matrix& m);
};
 
#endif