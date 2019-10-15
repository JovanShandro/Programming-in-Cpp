/*
    CH08-320143
    a4 p2.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
#include <iostream>
#include <set>
#include <ctime>
#include <cstdlib>
 
using namespace std;
 
int main()
{
    //i will use a set as it automatically
    //sorts its elements and contains no duplicates
    int a;
    srand(static_cast<unsigned int>(time(0)));
    set<int> s;
    //get the 6 numbers
    while(s.size() != 6)
    {
        a = rand()%49 +1;
        s.insert(a);
    }
    //print them in increasing order
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}