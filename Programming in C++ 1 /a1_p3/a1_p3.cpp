/*
	CH08-320142
	a1 p3.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <iostream>

float abs(float x);

int main()
{	
	float a = -3.4;
	float b = 3.7;
	float c = 0;
	std::cout<<"a = "<< a <<" b = "<< b <<" c = " << c << std::endl;//print the values of the three numbers
	std::cout<<"|a| = "<< abs(a) <<" and |b| = "<< abs(b)<<" and |c| = "<<abs(c);//print their absolute values
	
	return 0;
}

float abs(float x)
{
	if(x<0)
	{
		return -x;
	}else
	{
		return x;
	}
}
