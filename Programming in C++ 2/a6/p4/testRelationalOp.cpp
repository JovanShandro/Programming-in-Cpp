/*
	CH08-320143
	a6 p4.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include <exception>
#include "Fraction.h"

using namespace std;

//Test machinery
int nPass = 0, nFail = 0;
void test(bool t)
{
	if(t)
		nPass++;
	else
		nFail++;
}

int main()
{
	Fraction a(-4,7);
	Fraction b("-1/+3");
	Fraction c("3/22"), d = a;

	//Test the relational operators
	test(a < b);
	test(a <= b);
	test(a > b);
	test(a >= b);
	test(a == b);
	test(c < b);
	test(a <= c);
	test(a > c);
	test(c >= b);
	test(d == a);

	cout<<"Test '=' and the relational operators:"<<endl;
	cout << nPass << " tests passeed and "<< nFail << " tests failed"<<endl;
	return 0;
}