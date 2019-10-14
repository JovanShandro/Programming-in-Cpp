/*
	CH08-320142
	a1 p6.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	srand(static_cast <unsigned int >(time(0)));
	string name; int guess,numberOfTries =1;
	
	cout<<"What is your name ?"<<endl;
	getline(cin,name);
	
	int	randomnr = rand()%100 +1;//we get a random nr from 1 to 100
	
    cout<<"Your guess :"<<endl;
    cin>>guess;
    
    while(guess != randomnr){
   
    	numberOfTries++;
   
    	if(guess<randomnr){
    		cout<<"Too low"<<endl;
		}else{
			cout<<"Too high"<<endl;
		}
		
		cout<<"Your guess :"<<endl;
    	cin>>guess;
	}
	
	cout<<"Congratulations "<<name<<" you found the number with "<<numberOfTries<<" tries";
	return 0;
}
