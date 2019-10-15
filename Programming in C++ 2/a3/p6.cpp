/*
    CH08-320143
    a3 p6.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
//Reference: https://en.cppreference.com/w/cpp/container/priority_queue
#include <iostream>
#include <queue>
 
using namespace std;
 
 
int main()
{
    auto cmp = [](int l, int r) { return (l) > (r);};
    priority_queue<int, std::vector<int>, decltype(cmp)> q(cmp);
    
    //pushing elements in priority queue
    q.push(12);
    q.push(17);
    q.push(1);
    q.push(300);
    q.push(44);
    /*
        Printing top element which is the smallest as 
        we changed the ordering criterion using the
        funciton cmp. Now the elements get printed
        from smallest to largest 
    */
    while(!q.empty())
    {
        cout<< q.top() << " ";
        q.pop();
    }
    cout<<endl;
 
    return 0;
}