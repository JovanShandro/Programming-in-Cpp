/*
    CH08-320143
    a3 p1.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
int main()
{
    string word;
    vector<string> v;
    int i;
    
    do
    {
        //read the word
        cin >> word;
        //push the word in end of vector
        v.push_back(word);
    }while(word != "stop");
    //remove the "stop" in the end
    v.pop_back();
 
    //using index for printing
    cout<<"Printing the words separated by ',': "<<endl;
    for(i = 0; i < (int)v.size(); i++)
    {
        cout << v[i] ;
        if(i!= (int)v.size()-1)
            cout<<",";
    }
    cout<<endl;
    i=0;//i will help us not print the last space
    
    //printing with space as separation using iterator
    cout<<"Printing the words separated by ' ': "<<endl;
    vector<string>::iterator it;
    for(it = v.begin(); it!= v.end(); it++, i++)
    {
        cout << *it ;
        if(i!= (int)v.size()-1)
            cout<<" ";
    }
    cout<<endl;
    return 0;
}