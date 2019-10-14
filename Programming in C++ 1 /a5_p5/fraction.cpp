/*
    CH08-320142
    a5 p5.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

Fraction::Fraction(){
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d){
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b){
    if(b ==0){
        return a;
    }else{
        return gcd(b, a % b);
    }
}

int Fraction::lcm(int a, int b){
    return a * b / gcd(a, b);

}

std::ostream& operator<<(ostream& os, const Fraction& f) {
    //we also make sure that if numerator or denominator are negative
    //the minus will be printed properly
    if(f.den !=1){
        if((f.num>0 && f.den >0) || (f.num<0 && f.den<0)){
             os << f.num << '/' << f.den ;
        }else{
            if(f.num<0){
                os <<"-"<< (-1) * f.num << '/' << f.den ;
            }else {
                os <<"-"<< f.num << '/' <<  (-1) *f.den ;
            }
        }
    }else {
        os << f.num;
    }
    return os;
}
std::istream& operator>>(istream& input, Fraction& f ) {
     //to make sure the denominator is not 0
     do{
        input >> f.num >> f.den;
        if(f.den ==0){
            cout<<"Denominator can not be 0. Please enter a valid fraction"<<endl;
        }
     }while(f.den ==0);
     return input;
}

Fraction Fraction::operator*(const Fraction& a){
    int n= (num * a.num);
    int d = (den * a.den);
    Fraction f(n,d);
    return f;
}

Fraction Fraction::operator/(const Fraction& a){
    int n = (num * a.den);
    int d = (den * a.num);
    Fraction f(n,d);
    return f;
}
