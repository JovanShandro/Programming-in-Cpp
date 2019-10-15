/*
	CH08-320143
	a5 p3.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
using namespace std;

class Motor 
{
	public:
		Motor()
		{
			throw "This motor has problems";
		}
};

class Car
{
	private:
		Motor *m;
	public:
		Car()
		{
			m = new Motor();
		}
};

class Garage
{
	private:
		Car *c;
	public:
		Garage()
		{
			char const* a = "The car in this garage has problems with the motor";
			try
			{
				c = new Car();
			}
			catch(char const* c)//catch Motor excep.
			{
				throw a;
			}
		}

};


int main()
{
	try
	{
		Garage g;
	}
	catch(char const* c)//catch excep from Garage
	{
		cout<<c<<endl;
	}
	return 0;
}