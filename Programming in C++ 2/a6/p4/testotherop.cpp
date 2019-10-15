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
	Fraction c("3/22");
	Fraction prod(4,21), div(12,7);
	Fraction diff(-5,21), sum(-19,21);

	//Test the other operations
	test((a*b) == prod);
	test((a/b) == div);
	test((a-b) == diff);
	test((a+b) == sum);

	cout <<"Test + - * / operators and '==' indirectly:" << endl;
	cout << nPass << " tests passeed and " << nFail << " tests failed" << endl;
	return 0;
}