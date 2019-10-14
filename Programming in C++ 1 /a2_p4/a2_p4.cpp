/*
	CH08-320142
	a2 p4.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

string replacev(string s);//replaces the vowels with underscores

int main(){
	
	string s, word[17] = {"computer","television","keyboard",
						  "laptop","mouse","duck","tiramisu",
						  "bill","favorite","mathematics", 
						  "analysis","engineering","trainer",
						  "olympiad","swimmer","algorithm",
						  "avengers"};
	int random, numberOfTries = 1;
	bool done = false, guessed = false;
	
	srand(static_cast<unsigned int>(time(0)));
	random = rand() % 17;
	cout<< replacev(word[random]) <<endl;
		
	while(!done){
		
		if(guessed){
			random = rand() % 17;
			cout<< replacev(word[random]) <<endl;
			guessed = false;
		}
		
		getline(cin,s);
		
		if(s == "quit"){
			done = true;
		}else if(s == word[random]){
				
			if(numberOfTries ==1){
				cout<<"You found the word with "<<numberOfTries<<" try"<<endl;				
			}else{
				cout<<"You found the word with "<<numberOfTries<<" tries"<<endl;					
			}
				
			numberOfTries = 1;
			guessed = true;
		}else{
			numberOfTries++;
			cout<<"Try again"<<endl;
		}
	}
	
	return 0;
}

string replacev(string s){
	
	int i, n = s.length();
	string a = s;
	
	for(i=0; i<n; i++){
		if((a[i] == 'a') || (a[i] == 'e') || (a[i] == 'y') || (a[i] == 'u') || (a[i] == 'i') || (a[i] == 'o')){
			a[i] = '_';
		}
	}
	return a;
}
