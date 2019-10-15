/*
    CH08-320143
    a1 p1.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>

Complex::Complex()
{
    real = 0;
    imag = 0;
}
Complex::Complex(int r, int i)
{
    real = r;
    imag = i;
}

Complex::Complex(const Complex& c)
{
    real = c.real;
    imag = c.imag;
}

//setters
void Complex::set_real(int r)
{
    real = r;
}
void Complex::set_imag(int i)
{
    imag = i;
}
//getters
int Complex::get_real()
{
    return real;
}
int Complex::get_imag()
{
    return imag;
}
//operators
Complex Complex::operator+(Complex &c) {
	Complex res(this->real + c.real, this->imag + c.imag);
	return res;
}

Complex Complex :: operator-(Complex &c) {
	Complex res(this->real - c.real,this->imag - c.imag);
	return res;
}

Complex Complex :: operator *(Complex &c) {
	Complex res(this->real * c.real - this->imag*c.imag,
              this->real *c.imag + this->imag * c.real);
	return res;
}

Complex& Complex::operator=(Complex &c) {
	this->real = c.real;
	this->imag = c.imag;
	return *this;
}
//<< and >>
std::ostream& operator <<(std::ostream& os, Complex& c)
{
    os<<std::noshowpos<<c.real<<std::showpos
      <<c.imag<<std::endl;
    return os;
}
std::istream& operator >> (std::istream& is, Complex& c)
{
    is>>c.real>>c.imag;
    return is;
}
