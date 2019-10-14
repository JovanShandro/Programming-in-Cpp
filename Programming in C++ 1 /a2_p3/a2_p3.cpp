/*
	CH08-320142
	a2 p3.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
using namespace std;

void subtract_max(int*& a, int n);
void deallocate (int*& a);

int main (){
	
	int i,n;
	int * a;
  
	cout << "How many numbers would you like to enter? ";
	cin >> n;
  
	a= new int[n];//dynamically allocating the array
    for (i=0; i<n; i++){
    	cout << "Enter number: ";
    	cin >> a[i];
    }
  
	subtract_max(a,n);
  
    for(i=0; i<n; i++){
    	cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
  
	deallocate(a);
	return 0;
}

void subtract_max(int*& a, int n){
	int max = a[0],i;
	
	for(i=0; i<n; i++){
		if(max<a[i]){
			max = a[i];
		}
	}
	
	for(i=0; i<n; i++){
		a[i] -= max;
	}
}

void deallocate (int*& a){
	delete[] a;
}
