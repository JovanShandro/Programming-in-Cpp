/*
    CH08-320142
    a5 p2.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <cstring>
#include "TournamentMember.h"
using namespace std;

TournamentMember::TournamentMember(){
    cout << "Default constructor being called"<<endl;
}

TournamentMember::TournamentMember(const char * n, const char *l, const char *b, const string& r, int a) : role(r){
        cout << "Parametric constructor being called"<<endl;
        strcpy(name,n);
        strcpy(lastName,l);
        strcpy(birthday,b);
        age = a;
}
TournamentMember::TournamentMember(const TournamentMember& t){
    cout << "Copy constructor being called"<<endl;
    strcpy(name,t.name);
    strcpy(lastName,t.lastName);
    strcpy(birthday,t.birthday);
    role = t.role;
    age = t.age;
}
TournamentMember::~TournamentMember(){
    cout << "Destructor being called"<<endl;
}

std::string TournamentMember::location = "Germany";


//others
void  TournamentMember::print(){
    cout << "\nName : " << name << "\nLast name : "<<lastName;
    cout << "\nBirthday : " << birthday << "\nRole : "<<role;
    cout << "\nAge : " << age << "\nLocation : " << location << endl;
}

