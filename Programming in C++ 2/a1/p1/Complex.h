/*
    CH08-320143
    a1 p1.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex
{
    private:
        int real;
        int imag;
    public:
        Complex();
        Complex(int, int);
        Complex(const Complex&);
        //setters
        void set_real(int);
        void set_imag(int);
        //getters
        int get_real();
        int get_imag();
        //overloaded operators
        Complex& operator =(Complex&);
        Complex operator +(Complex&);
        Complex operator -(Complex&);
        Complex operator *(Complex&);
        //friend functions
        friend std::ostream& operator <<(std::ostream&, Complex&);
        friend std::istream& operator >>(std::istream&, Complex&);

};

#endif // COMPLEX_H
