/*
    CH08-320143
    a5 p2.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include <exception>
using namespace std;
 
class OwnException : public exception
{
    string msg;
    public:
        OwnException(string s){msg = s;}
        string what()
        {
            return msg;
        }
};
 
void function(int n)
{
    string s = "This is a default case exception";
    switch(n)
    {
        case 1:
            throw 'e';
            break;
        case 2:
            throw 99;
            break;
        case 3:
            throw false;
            break;
        default:
            throw OwnException(s);
            break;
    }
}
 
int main()
{
    //try catch block catching the char
    try
    {
        function(1);
    }catch(char c)
    {
        cerr<<"Exception caught in main: ";
        cerr<< c << endl;
    }
    //try catch block catching the int
    try
    {
        function(2);
    }catch (int n)
    {
        cerr<<"Exception caught in main: ";
        cerr<< n << endl;
    }
    //try catch block catching the boolean
    try
    {
        function(3);
    }catch (bool b)
    {
        cerr<<"Exception caught in main: ";
        cerr<< b << endl;
    }
    //try catch block catching the OwnException
    try
    {
        function(4);
    }catch(OwnException& o)
    {
        cerr<<"Exception caught in main: " <<o.what()<<endl;
    }
 
    return 0;
}