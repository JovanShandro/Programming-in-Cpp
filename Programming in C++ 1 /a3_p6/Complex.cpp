#include <iostream>
#include <cmath>                      //needed for sqrt
#include "Complex.h"

using namespace std;

Complex::Complex() {
	real = imag = 0;
}

Complex::Complex(float r, float i) {

	real = r;
	imag = i;
}
Complex::Complex(const Complex& x)
{
    real = x.real;
    imag = x.imag;
}

Complex::~Complex() {
    //empty destructor
}

void Complex::print() {               // prints data to screen via cout
	if (imag) {
		cout << noshowpos << real << showpos << imag << "i" << endl;
	} else {
		cout << noshowpos << real << showpos << endl;
	}
}

//setters
void Complex::setRe(float r){
    real = r;
}
void Complex::setIm(float i){
    imag = i;
}

//getters
float Complex::getRe(){
    return real;
}
float Complex::getIm(){
    return imag;
}

Complex Complex ::conjugate(){
    Complex a;
    a.real = real;
    a.imag = -imag;
    return a;
}
Complex Complex :: add (Complex c){
    Complex a;
    a.real = (real + c.real);
    a.imag = (imag + c.imag);
    return a;
}

Complex Complex :: subtract (Complex c){
    Complex a;
    a.real = (real - c.real);
    a.imag = (imag - c.imag);
    return a;
}


Complex Complex :: multiply (Complex c){
    Complex a;
    a.real = (real * c.real - imag * c.imag);
    a.imag = (real * c.imag + imag * c.real);
    return a;
}
