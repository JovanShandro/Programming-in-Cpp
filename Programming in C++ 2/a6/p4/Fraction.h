/*
	CH08-320143
	a6 p4.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction
{
	private:
		int num;
		int den;
	public:
		Fraction(int n, int d);
		Fraction(std::string s);
		Fraction(const Fraction&);
		//getters
		int get_num();
		int get_den();
		//setters
		void set_num(int);
		void set_den(int);
		//boolean operators
		bool operator <(Fraction& f);
		bool operator >(Fraction& f);
		bool operator <=(Fraction& f);
		bool operator >=(Fraction& f);
		bool operator ==(Fraction& f);
		bool operator !=(Fraction& f);
		//arithmatic operators
		Fraction operator +(Fraction& f);
		Fraction operator -(Fraction& f);
		Fraction operator *(Fraction& f);
		Fraction operator /(Fraction& f);
		Fraction operator =(const Fraction& f);
		//the << and >> operators
		friend std::ostream& operator<< (std::ostream& os, Fraction&);
		friend std::istream& operator>> (std::istream& is, Fraction&);
};

#endif