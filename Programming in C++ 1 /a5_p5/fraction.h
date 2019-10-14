/*
    CH08-320142
    a5 p5.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;

class Fraction {

private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator

    int gcd(int a, int b);        // calculates the gcd of a and b
    int lcm(int a, int b);

public:
    Fraction();                    // empty constructor
    Fraction(int, int = 1);     // constructor taking values for fractions and
    //other
    Fraction operator*(const Fraction& a);
    Fraction operator/(const Fraction& a);
    friend ostream& operator<< (ostream& os, const Fraction& f);
    friend istream& operator>> (istream& input, Fraction& f );
};


#endif // FRACTION_H
