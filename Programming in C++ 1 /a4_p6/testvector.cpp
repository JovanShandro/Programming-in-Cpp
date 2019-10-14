/*
	CH08-320142
	a4 p6.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    int n;
    double *a;
    // Read n
    cout<<"n: ";
    cin>>n;

    Vector v1,v2;
    cout<<"Enter the first vector:"<<endl;
    a = new double[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    // Set sizes of vectors
    v1.setSize(n);
    v2.setSize(n);
    // Set components of first
    v1.setComponents(a);
    cout<< endl <<"Enter the second vector:"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    // Set components for second vec 
    v2.setComponents(a);
    delete []a;

    cout<<"The addition of the two vectors creates this vector:"<<endl;
    (v1.add(v2)).print();

    cout<<endl<<"Norm of the first vector:"<<endl;
    cout<<v1.norm()<<endl;
    
    cout<<endl<<"The subtraction of the two vectors creates this vector:"<<endl;
    (v1.diff(v2)).print();
    
    cout<<endl<<"The scalar product of the two vectors is:"<<endl;
    cout<<v1.product(v2)<<endl;
    
    return 0;
}