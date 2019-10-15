/*
    CH08-320143
    a3 p2.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main()
{
    string line;
    vector<string> v;
    int i;
    
    do
    {
        //read the line
        getline(cin, line);
        //push the word in end of vector
        v.push_back(line);
    }while(line != "STOP");
    //remove the "STOP" in the end
    v.pop_back();
 
    //swapping second and forth elements if possible
    if(v.size() >=4)
    {
        string s = v[1]; //second string
        v[1]     = v[3];     //forth string
        v[3]     = s;
    }else
    {
        cerr<< "Swapping is not possible!" <<endl;
    }
 
    //replacing last element
    if(v.size() >= 0)
    {
        v.pop_back();
        v.push_back("?");
    }else
    {
        cerr<< "Replacing is not possible!" <<endl;
    }
 
    //using index for printing
    cout<<"Printing the lines separated by ';': "<<endl;
    for(i = 0; i < (int)v.size(); i++)
    {
        cout << v[i] ;
        if(i!= (int)v.size()-1)
            cout<<";";
    }
    cout<<endl;
    
    //printing with dash separation
    cout<<"Printing the lines separated by '-': "<<endl;
    vector<string>::iterator it;
    for(it = v.begin(), i=0; it!= v.end(); it++, i++)
    {
        cout << *it ;
        if(i!= (int)v.size()-1)
            cout<<"-";
    }
    cout<<endl;
 
    cout<<"Printing the strings in reverse order separated by space:"<<endl;
    for(it = v.end()-1, i=0; it != v.begin()-1; it--, i++)
    {
        cout << *it ;
        if(i!= (int)v.size()-1)
            cout<<" ";
    }
    cout<<endl;
 
    return 0;
}