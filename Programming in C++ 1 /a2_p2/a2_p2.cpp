/*
	CH08-320142
	a2 p2.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
using namespace std;

void swapping(int& a, int& b) { 

	int c;
	c = a;
	a = b;
	b = c;

} // swap ints

void swapping(float& a, float& b) {

	float c;
	c = a;
	a = b;
	b = c;

} // swap floats

void swapping(const char*& a,const char*& b) {

	const char *c;
	c = a;
	a = b;
	b = c;

} // swap char pointers

int main(void) {

	int a = 7, b = 15;
	float x = 3.5, y = 9.2;
	const char *str1 = "One";
	const char *str2 = "Two";

	cout << "a=" << a << ", b=" << b << endl;
	cout << "x=" << x << ", y=" << y << endl;
	cout << "str1=" << str1 << ", str2=" << str2 << endl;

	swapping(a, b);//swaps ints
	swapping(x, y);//swaps floats
	swapping(str1, str2);//swaps char pointers

	cout << "a=" << a << ", b=" << b << endl;
	cout << "x=" << x << ", y=" << y << endl;
	cout << "str1=" << str1 << ", str2=" << str2 << endl;

	return 0;
}

