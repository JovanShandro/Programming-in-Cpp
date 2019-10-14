/*
	CH08-320142 
	a4 p2.cpp 
	Jovan Shandro
	jshandro@jacobs-university.de
*/

#include <iostream>

using namespace std;

// the creature class
class Creature {
	public:
		Creature();
		~Creature();		  
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10){
	cout<<"Creature constructer called"<<endl;
}    

Creature::~Creature(){
	cout<<"\nCreature deconstructer called"<<endl;
}    


void Creature::run() const{ 
    cout << "running " << distance << " meters!\n";
}  

//the wizard class
class Wizard : public Creature {
	public:
		Wizard();
		~Wizard();		
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3){
	cout<<"Wizard constructor called"<<endl;
}  

Wizard::~Wizard(){
	cout<<"\nWizard deconstructor called"<<endl;
}  

void Wizard::hover() const{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//the elf class
class Elf : public Creature {
	public:
		Elf();
		~Elf();
		void walk() const;

	private:
		int speed;
};

Elf::Elf() : speed(3){
	cout << "Elf constructor called" << endl;
}  

Elf::~Elf(){
	cout << "\nElf deconstructor called" << endl;
}  

void Elf::walk() const{
    cout << "running " << distance << " meters at speed " << speed << endl;
}

//the alien class
class Alien : public Creature {
	public:
		Alien();
		~Alien();
		void alienate() const;

	private:
		int brainMass;
};

Alien::Alien() : brainMass(3000){
	cout<<"Alien constructor called"<<endl;
}  

Alien::~Alien(){
	cout<<"\nAlien deconstructor called"<<endl;
}  

void Alien::alienate() const{
    cout << "running " << distance << " meters. Brain mass : " << brainMass << endl;
}


int main(){
 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

	cout << "\nCreating a Elf.\n";
    Elf e;
    e.run();
    e.walk();
    
    cout << "\nCreating a Alien.\n";
    Alien a;
    a.run();
    a.alienate();

    return 0;
} 
