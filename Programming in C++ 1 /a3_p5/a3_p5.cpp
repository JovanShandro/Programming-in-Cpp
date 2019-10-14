/*
	CH08-320142
	a3 p5.cpp
	Jovan Shandro
	jshandro@jacobs-university.de
*/
#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
    private:
        char *str;
    public:
        NaiveString(const char*);
        NaiveString(const NaiveString&);
		~NaiveString();
        void update(char, char);
        void print();
};

NaiveString::NaiveString(const char* t) {
	cout<<"Normal constructor being called"<<endl;
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

/*
	Copy constructor: creates a new instance of
	naive string starting from an existing one
*/


NaiveString::NaiveString(const NaiveString& src) {
	cout<<"Copy constructor being called"<<endl;
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

NaiveString::~NaiveString()
{
	delete []str;
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++)
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

void funcByRef(NaiveString& s){
    cout << "funcbyref() being called"<<endl;
    s.update('B','C');
    s.print();
}

int main(int argc, char** argv)
{
	NaiveString* a = new NaiveString("aBcBdB");
	NaiveString* b = new NaiveString(*a);
    a->print();

	cout << "About to call funcbyval()" << endl;
	funcByVal(*a);//the function does not change the object itself but a copy of it
	a->print();

	cout << "About to call funcbyref()" << endl;
	funcByRef(*a);//the function does change the object itself;
	a->print();

	delete a;
	delete b;

	cout<<endl;//in case of a problem while running on a terminal
	return 0;
}
