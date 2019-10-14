#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex {

    private:
        float real;  // real part
        float imag;  // imaginary part

    public:
        Complex();
        ~Complex();
        Complex(const Complex&);
        Complex(float, float = 0);
        //setters
        void setRe(float r);
        void setIm(float i);
        //getters
        float getRe();
        float getIm();
        //others
        void print();
        Complex conjugate();
        Complex add (Complex);
        Complex subtract (Complex);
        Complex multiply (Complex);
};

#endif // COMPLEX_H
