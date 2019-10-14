/*
	CH08-320142
	a2 p5.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome (string s);

int main(){
	
	bool done = false;
	string x;
	
	while (!done){
		
		getline(cin,x);
		
		if(x == "exit"){
			done = true;
		}else if(isPalindrome(x)){
			cout<<x<<" is a palindrome"<<endl;
		}else{
			cout<<x<<" is not a palindrome"<<endl;
		}
	}
	return 0;
}

bool isPalindrome (string s)
{
    int i;
    int length = s.length();

    for (i = 0; i < length; ++i){
    	if (s.at(i) != s.at(length - i - 1)) return false; // will return false if the string is not equal to its reverse
	}
		
    return true;
}
