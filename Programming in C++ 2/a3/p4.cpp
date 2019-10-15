/*
    CH08-320143
    a3 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include <deque>
 
using namespace std;
 
int main()
{
    deque<double> A;
    double x;
    int i = 0;
    //reading doubles till 0
    while(true)
    {
        cin >> x;
        if(x==0)
            break;
        if(x > 0)
            A.push_front(x);
        if(x < 0)
            A.push_back(x);
    }
    //printing the elements of A sep. by spaces
    deque<double>::iterator it;
    for(it = A.begin(); it != A.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)A.size()-1)
            cout<<" ";
    }
    cout<<endl;
    //print an empty line
    cout << endl;
    
    it = A.begin();
    //adding 0 in the middle of deque
    /*
        Since the problem does not specify what 
        should happen if the deque has only positive
        or only negative numbers, I am assuming
        I should not add anything to the deque
    */
    for(int j =0; j<(int)A.size(); it++, j++)
    {
        if((A[j] > 0) && (A[j+1] < 0))
        {
            A.insert(it+1, 0);
            break;
        }
    }
    //printing the elements of A sep. by spaces
    i =0;
    for(it = A.begin(); it != A.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)A.size()-1)
            cout<<";";
    }
 
    cout << endl;
    return 0;
}