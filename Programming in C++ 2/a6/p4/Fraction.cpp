/*
	CH08-320143
	a6 p4.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction(int n, int d)
{
	num = n;
	if(d != 0)
		den = d;
	else
		throw "Invalid data or logical error";
	/*
		for sake of simplicity, if a
		fraction has negative denominator
		I am multiplying both num and den
		with (-1) to always keep the 
		den positive which will be helpful
		in the funcitions below 
	*/
	if(den<0)
	{
		den = (-1)*den;
		num = (-1)*num;
	}
}	

Fraction::Fraction(const Fraction& f)
{
	num = f.num;
	den = f.den;
}

Fraction::Fraction(string s)
{
	char c = s[0];
	string nr;
	int i;
	if(c == '+')
	{
		i = s.find('/');
		nr = s.substr(1,i-1);
		num = stoi(nr);
		c = s[i+1];
		if(c == '+')
		{
			nr = s.substr(i+2);
			den = stoi(nr);
		} 
		else if(c == '-')
		{
			nr = s.substr(i+2);
			den = stoi(nr);
			den = (-1)*den;
		}
		else
		{
			nr = s.substr(i+1);
			den = stoi(nr);
		}
		//check if den is negative
		if(den < 0)
		{
			den = (-1)*den;
			num = (-1)*num;
		}
	}
	else if(c == '-')
	{
		i = s.find('/');
		nr = s.substr(1,i-1);
		num = stoi(nr);
		num = (-1)*num;
		c = s[i+1];
		if(c == '+')
		{
			nr = s.substr(i+2);
			den = stoi(nr);
		} 
		else if(c == '-')
		{
			nr = s.substr(i+2);
			den = stoi(nr);
			den = (-1)*den;
		}
		else
		{
			nr = s.substr(i+1);
			den = stoi(nr);
		}
		//check if den is negative
		if(den < 0)
		{
			den = (-1)*den;
			num = (-1)*num;
		}
	}
	else
	{
		i = s.find('/');
		nr = s.substr(0,i);
		num = stoi(nr);
		c = s[i+1];
		if(c == '+')
		{
			nr = s.substr(i+2);
			den = stoi(nr);
		} 
		else if(c == '-')
		{
			nr = s.substr(i+2);
			den = stoi(nr);
			den = (-1)*den;
		}
		else
		{
			nr = s.substr(i+1);
			den = stoi(nr);
		}
		//check if den is negative
		if(den < 0)
		{
			den = (-1)*den;
			num = (-1)*num;
		}
	}
}

//getters
int Fraction::get_num()
{
	return num;
}

int Fraction::get_den()
{
	return den;
}

//setters
void Fraction::set_num(int num)
{
	this->num = num;
}	

void Fraction::set_den(int den)
{
	this->den = den;
}


//boolean operators
bool Fraction::operator <(Fraction& f)
{
	Fraction g = *this - f;
    return (g.num * g.den <0);
}

bool Fraction::operator >(Fraction& f)
{
	Fraction g = *this - f;
    return (g.num * g.den >0);
}

bool Fraction::operator <=(Fraction& f)
{
	Fraction g = *this - f;
    return (g.num * g.den <=0);
}

bool Fraction::operator >=(Fraction& f)
{
	Fraction g = *this - f;
    return (g.num * g.den >=0);
}

bool Fraction::operator ==(Fraction& f)
{
	Fraction g = *this - f;
    return (g.num * g.den ==0);
}

bool Fraction::operator !=(Fraction& f)
{
	Fraction g = *this - f;
    return (g.num * g.den !=0);
}
//arithmatic operators
Fraction Fraction::operator +(Fraction& f)
{
	int n = (num * f.den) + (f.num * den);
    int d = den * f.den;
    Fraction g(n,d);
    return g;
}
Fraction Fraction::operator -(Fraction& f)
{
	int n = (num * f.den) - (f.num * den);
    int d = den * f.den;
    Fraction g(n,d);
    return g;
}
Fraction Fraction::operator *(Fraction& f)
{
	int n= (num * f.num);
    int d = (den * f.den);
    Fraction g(n,d);
    return g;
}
Fraction Fraction::operator /(Fraction& f)
{
	int n = (num * f.den);
    int d = (den * f.num);
    Fraction g(n,d);
    return g;
}

Fraction Fraction::operator=(const Fraction& f){
    num = f.num;
    den = f.den;
    return *this;
}

//the << and >> operators
ostream& operator<< (ostream& os, Fraction& f)
{
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
    os<<endl;
    return os;
}

istream& operator>> (istream& input, Fraction& f)
{
	//to make sure the denominator is not 0
    input >> f.num >> f.den;
    if(f.den ==0){
		throw "Invalid data or logical error";
    }
    if(f.den < 0)
    {
    	f.den = (-1)*f.den;
    	f.num = (-1)*f.num;
    }
     
     return input;
}