/*
	CH08-320142
	a6 p1.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	int count = 0;
	int randomNr;
	
	//the array of colors
	string colors[4] = {"RED","BLACK","BLUE","VIOLET"};
	
	//makes sure every time we get different random nrs
	srand(static_cast<unsigned int>(time(0)));
	
	while(count < 15){
		randomNr = rand() % 4;//generates a random nr from 0 to 3
		cout << count + 1 << " : " << colors [randomNr] << endl;
		count++;
	}
	
	cout<<endl;
	return 0;
}
