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
	Fraction a(1,2);
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
		cin>>a;
		nPass++;
	}
	catch(char const *m)
	{
		cerr << "Error caught: "<< m << endl;
		nFail++;
	}

	cout << "Testing the << and >> operator and the constructors "<<endl;
	cout << nPass << " tests passeed and "<< nFail << " tests failed"<<endl;
	return 0;
}