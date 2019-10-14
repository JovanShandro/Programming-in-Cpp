/*
	CH08-320142
	a1 p5.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int i;
	string s,con="";
	bool done = false;

	
	while(!done){	
	    cin >> s;
	
		if(s=="quit"){
			done = true;
		}else{
			con+=s;			
		}
	}
	
	for(i =0; i < (int)con.length();i++){
		if(con.at(i) == ' '){
			con.erase(i,1);//deletes the spaces
		}
	}
	
	cout << con << endl;
	
	return 0;
}
