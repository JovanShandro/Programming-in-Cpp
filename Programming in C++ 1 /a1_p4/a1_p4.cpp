/*
	CH08-320142
	a1 p4.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

int mycount(int a, int b);//the function to get the difference of 2 ints
int mycount(char c, string s);//the function to count the occurences of a char in a string

int main(){
	
	cout << "3 - 7 = "<<mycount(7,3)
		 << " and the letter 'i' is found "
		 << mycount('i',"this is a string")
		 << " times in the string \" this is a string\""<<endl;
	
	return 0;
}

int mycount(int a, int b){
	return b-a;
}

int mycount(char c, string s){
	int count =0,i,n = s.length();
	for(i=0;i<n;i++){
		
		if(s.at(i)==c){
			count++;
		}
	}
	return count;
}

