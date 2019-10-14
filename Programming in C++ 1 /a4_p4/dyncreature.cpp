/*
	CH08-320142
	a4 p4.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <iostream>
#include "Creature.h"
using namespace std;


int main(int argc, char** argv) {

	string s;

	while(true){

		cout<<"Enter a word:"<<endl;
		cin>>s;
		if(s == "quit"){
			break;
		}else{
			if(s == "wizard"){

				Wizard *w = new Wizard;
  	  			w->hover();
    			delete w;
			}else if (s == "object1"){

				Elf *e = new Elf();
    			e->walk();
				delete e;
			}else if (s == "object2"){

				Alien *a = new Alien();
    			a->alienate();
    			delete a;
			}else{
				continue;
			}
		}
	}

    return 0;
}
