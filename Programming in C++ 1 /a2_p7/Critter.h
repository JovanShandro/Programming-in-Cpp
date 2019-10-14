#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	int age; //added
	double weight;//added
	double height;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setAge(int newage);//added
	void setWeight(double newweight);//added
	// getter method
	int getHunger();//added
	int getAge();//added
	double getWeight();//added
	// service method
	void print();
};
