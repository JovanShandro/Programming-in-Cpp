/*
    CH08-320143
    a4 p5.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include <fstream>
#include <string>
#include <map>
 
using namespace std;
 
int main()
{
    //opening the file
    ifstream f;
    f.open("data.txt", ios::in);
    if(!f.is_open())
        exit(1);
    //creating the map and reading from file
    int x;
    string s;
    map<int, string> m;
 
    while (f >> x)
    {
        f.get();
        getline(f,s);
        m[x] = s;
    }
    //asking for a matriculation number and printing name 
    cout<< "Enter the matriculation number:"<<endl;
    cin >> x;
    
    map<int, string>::iterator it = m.find(x);
    if(it != m.end())
    {
        cout << "Person: "<< it->second << endl;
    }
    else
        cout<<"Matriculation number not found"<<endl;
 
    f.close();
    return 0;
}