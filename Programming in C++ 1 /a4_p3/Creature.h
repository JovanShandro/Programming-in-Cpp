/*
	CH08-320142
	a4 p3.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#ifndef CREATURE_H
#define CREATURE_H

// the creature class
class Creature {
	public:
		Creature();
		~Creature();
		void run() const;

	protected:
		int distance;
};

//the wizard class
class Wizard : public Creature {
	public:
		Wizard();
		~Wizard();
		void hover() const;

	private:
		int distFactor;
};

//the elf class
class Elf : public Creature {
	public:
		Elf();
		~Elf();
		void walk() const;

	private:
		int speed;
};

//the alien class
class Alien : public Creature {
	public:
		Alien();
		~Alien();
		void alienate() const;

	private:
		int brainMass;
};

#endif
