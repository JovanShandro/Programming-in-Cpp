/*
    CH08-320143
    a4 p1.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    vector<char> v;
    int i = 0;
    //filling the vector
    for(char i = 'a'; i != ('z'+1); i++)
        v.push_back(i);
    //printing the vector
    for(auto it = v.begin(); it!= v.end(); it++, i++)
    {
        cout << *it; 
        if(i!= (int)v.size()-1)
            cout<<" ";
    }
    cout << endl;
    //reverse and print again
    reverse(v.begin(), v.end());
    for(auto it = v.begin(); it!= v.end(); it++, i++)
    {
        cout << *it; 
        if(i!= (int)v.size()-1)
            cout<<" ";
    }
    cout<<endl;
    //adding 'f' in the end
    v.push_back('f');
    //replacing f-s with $
    replace(v.begin(), v.end(), 'f', '$');
    //printing again
    for(auto it = v.begin(); it!= v.end(); it++, i++)
    {
        cout << *it; 
        if(i!= (int)v.size()-1)
            cout<<" ";
    }
 
    cout<<endl;
    return 0;
}