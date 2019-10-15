/*
	CH08-320143
	a6 p3.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
/*
	Small note:
	since it is not required by the program
	it is possible to have fractions 
	such as 8 over 4, it does not simplity
	itself to 2 but stays the same way.
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
	Fraction prod(4,21), div(12,7);
	Fraction diff(-5,21), sum(-19,21);

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

	//Test the other operations
	test((a*b) == prod);
	test((a/b) == div);
	test((a-b) == diff);
	test((a+b) == sum);

	//Test <<, >> and constructors using exception throwing
	try
	{
		Fraction(5,0);
		cout<<"arrite ktu"<<endl;
		nPass++;
	}
	catch(char const* m)
	{
		cerr << "Error caught: "<< m << endl;
		nFail++;
	}

	try
	{
		Fraction("-4/-a");
		nPass++;
	}
	catch(exception e)
	{
		cerr << "Error caught: "<< e.what() << endl;
		nFail++;
	}

	try
	{
		cout << a;
		nPass++;
	}
	catch(exception e)
	{
		cerr << "Error caught: "<< e.what() << endl;
		nFail++;
	}

	try
	{
		cin>>b;
		nPass++;
	}
	catch(char const *m)
	{
		cerr << "Error caught: "<< m << endl;
		nFail++;
	}

	cout << nPass << " tests passeed and "<< nFail << " tests failed"<<endl;
	return 0;
}