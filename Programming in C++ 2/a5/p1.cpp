/*
    CH08-320143
    a5 p1.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;
 
int main()
{
    vector<char> v;
    //pushing 15 @ in the vector
    for(int i = 0; i<15; i++)
        v.push_back('@');
    //trying to access the 16th element
    try
    {
        v.at(15);
    }catch(out_of_range& e)//catch the exception
    {
        cerr << e.what() << endl;
    }
 
    return 0;
}