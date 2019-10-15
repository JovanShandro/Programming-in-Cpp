/*
    CH08-320143
    a4 p3.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
#include <set>
#include <algorithm>
 
using namespace std;
 
int main()
{
    /*
        E F store the set difference and symmetric 
        difference of A and B
    */
    set<int> A, E, F; 
    /*
        C D store the union and intersection of A and B
    */
    multiset<int> B, C, D;
 
    int x, i=0;
 
    while(true)
    {
        cin>>x;
        if(x < 0)
            break;
        A.insert(x);
        B.insert(x);
    }
 
    //PRINT A
    cout<<"A: ";    
    for(auto it = A.begin(); it != A.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)A.size()-1)
            cout<<" ";
    }
    cout << endl;
 
    //PRINT EMPTY LINE
    cout << endl;
 
    //PRINT B
    i=0;
    cout<<"B: ";
    for(auto it = B.begin(); it != B.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)B.size()-1)
            cout<<" ";
    }
    cout << endl;
 
    //PRINT EMPTY LINE
    cout <<endl;
    
    //REMOVING 11 FROM BOTH A AND B
    for(auto it = A.begin(); it != A.end(); it++)
    {
        if(*it == 11)
            A.erase(it);
    }
    for(auto it = B.begin(); it != B.end(); it++)
    {
        if(*it == 11)
            B.erase(it);
    }
    
    //PRINT A
    cout<<"A: ";
    i=0;
    for(auto it = A.begin(); it != A.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)A.size()-1)
            cout<<" ";
    }
    cout << endl;
    //PRINT EMPTY LINE
    cout << endl;
    //PRINT B
    i=0;
    cout<<"B: ";
    for(auto it = B.begin(); it != B.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)B.size()-1)
            cout<<" ";
    }
    cout << endl;    
    cout << endl;
 
    //ADD 5 AND 421 TO A
    A.insert(5);
    A.insert(421);
 
    //SET UNION
    set_union(A.begin(), A.end(), B.begin(), B.end(),
                inserter(C, C.begin()));
    //Printing the union
    i=0;
    cout<<"Union: ";
    for(auto it = C.begin(); it != C.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)C.size()-1)
            cout<<" ";
    }
    cout << endl;
    
    //SET INTERSECTION
    set_intersection(A.begin(), A.end(), B.begin(), B.end(),
                inserter(D, D.begin()));
    //Printing the intersection
    i=0;
    cout<<"Intersection: ";
    for(auto it = D.begin(); it != D.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)D.size()-1)
            cout<<" ";
    }
    cout << endl;
    
    //SET DIFFERENCE
    set_difference(A.begin(), A.end(), B.begin(), B.end(),
                inserter(E, E.begin()));
    //Printing the difference
    i=0;
    cout<<"Difference: ";
    for(auto it = E.begin(); it != E.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)E.size()-1)
            cout<<" ";
    }
    cout << endl;
    
    //SET SYMMETRIC DIFFERENCE
    set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(),
                inserter(F, F.begin()));
    //Printing the difference
    i=0;
    cout<<"Symmetric difference: ";
    for(auto it = F.begin(); it != F.end(); it++, i++)
    {
        cout<<*it;
        if(i!= (int)F.size()-1)
            cout<<" ";
    }
    
    cout << endl;
    return 0;
}
