/*
	CH08-320142
	a2 p1.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
using namespace std;

int myfirst(int  arr[],int n);
double myfirst(double arr[],int n);
char myfirst(char arr[],int n);

int main(){
	
	int a[] = {1,2,3,4,5};
	double b[] = {1.2,4.3,-2.0,3.0};
	char c[] = {'a','y','b','e'};
	int d[] = {1,3,5,7,9};
	double e[] = {1.2,2.2,3.3,2};
	char f[] = {'a','e','i','u'};
	//printing the values just to check if the function works
	cout<<"myfirst(a,5) = "<<myfirst(a,5)<<" myfirst(b,4) = "<<myfirst(b,4)<<" myfirst(c,4) = "<<myfirst(c,4)<<endl;
	cout<<"myfirst(d,5) = "<<myfirst(d,5)<<" myfirst(e,4) = "<<myfirst(e,4)<<" myfirst(c,4) = "<<myfirst(f,4)<<endl;
	
	return 0;
}

int myfirst(int arr[], int n){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]>0 && arr[i]%2==0){
			return arr[i];
		}
	}
	return -1;
}

double myfirst(double arr[], int n){
	int i;
	for(i =0; i<n;i++){
		if(arr[i]<0 && ((int)arr[i] - arr[i]==0.0)){
			return arr[i];
		}
	}
	return -1.1;
}

char myfirst(char arr[], int n){
	int i;
	for(i =0; i<n;i++){
			switch(arr[i]){
			case 'B':case 'b':
			case 'C':case 'c':
			case 'D':case 'd':
			case 'F':case 'f':
			case 'G':case 'g':
			case 'H':case 'h':
			case 'J':case 'j':
			case 'K':case 'k':
			case 'L':case 'l':
			case 'M':case 'm':
			case 'N':case 'n':
			case 'P':case 'p':
			case 'Q':case 'q':
			case 'R':case 'r':
			case 'S':case 's':
			case 'T':case 't':
			case 'V':case 'v':
			case 'X':case 'x':
			case 'W':case 'w':
			case 'Z':case 'z':
				return arr[i];
				break;
			default:
				break;
		}
	}
	
	return '0';
}
