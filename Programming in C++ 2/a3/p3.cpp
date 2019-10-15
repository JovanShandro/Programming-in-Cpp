/*
    CH08-320143
    a3 p3.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include <list>
#include <fstream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    ofstream o;
    list<int> A, B;
    int x, i=0;
    while(true)
    {
        cin>>x;
        if(x <= 0)
            break;
        A.push_front(x);
        B.push_back(x);
    }
    //printing list A
    cout<<"Printing A:"<<endl;
    for(auto it = A.begin(); it!=A.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)A.size()-1)
            cout<<" ";
    }
    cout<<endl;
    
    //printing reversed B in file
    o.open("listB.txt", ios::out);
    if(!o.is_open())
        exit(1);
    
    //reversing B, printing it and reversing it again 
    //to initial values
    i = 0;    
    reverse(B.begin(), B.end());
    for(auto it = B.begin(); it!=B.end(); it++, i++)
    {
        o<<*it;
        if(i!= (int)B.size()-1)
            o<<" ";
    }
    o<<endl;
    reverse(B.begin(), B.end());
    //printing an empty line
    cout<<endl;
    
    //moving last elements to beginning
    x = A.back();
    A.pop_back();
    A.push_front(x);
    
    x = B.back();
    B.pop_back();
    B.push_front(x);
    
    //printing them both in the std output sep by comma
    i=0;
    cout<<"Printing A:"<<endl;
    for(auto it = A.begin(); it!=A.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)A.size()-1)
            cout<<",";
    }
    cout<<endl;
    
    //printng B
    i=0;
    cout<<"Printing B:"<<endl;
    for(auto it = B.begin(); it!=B.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)B.size()-1)
            cout<<",";
    }
    cout<<endl;
    //printing another empty line
    cout<<endl;
 
    //merging A into B; no conditions are needed to be checked
    for(auto it = A.begin(); it != A.end(); it++)
    {
        B.push_back(*it);
    }
 
    //print the merged list
    i=0;
    B.sort();
    cout<<"Printing the sorted merged list: "<<endl;
    for(auto it = B.begin(); it!=B.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)B.size()-1)
            cout<<" ";
    }
 
    cout << endl;
    return 0;
}