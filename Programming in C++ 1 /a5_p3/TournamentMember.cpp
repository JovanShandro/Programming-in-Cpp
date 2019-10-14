/*
    CH08-320142
    a5 p3.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <cstring>
#include "TournamentMember.h"
using namespace std;


//tournament member class
TournamentMember::TournamentMember(){
    cout << "Default constructor of TournamentMember"<<
            " being called"<<endl;
}

TournamentMember::TournamentMember(const char * n, const char *l,
                                   const char *b, const string& r, int a) : role(r){
    cout << "Parametric constructor of TournamentMember"<<
            " being called"<<endl;
    strcpy(name,n);
    strcpy(lastName,l);
    strcpy(birthday,b);
    age = a;
}
TournamentMember::TournamentMember(const TournamentMember& t){
    cout << "Copy constructor of TournamentMember being called"<<endl;
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
//player class
Player::Player(){
    cout << "Default constructor of Player being called"<<endl;
    nr_goals = 0;
}

Player::Player(const char *n , const char *l, const char *b,
               int a, int nr, std::string pos, int nr_g, std::string f) :
                   TournamentMember(n,l,b,"Player",a){
    cout << "Parametric constructor of Player being called"<<endl;
    number = nr;
    position = pos;
    nr_goals = nr_g;
    footed = f;
}

Player::Player(const Player& p){
    cout << "Copy constructor of Player being called"<<endl;
    number = p.number;
    nr_goals = p.nr_goals;
    position = p.position;
    footed = p.footed;
    strcpy(name,p.name);
    strcpy(lastName,p.lastName);
    strcpy(birthday,p.birthday);
    role = p.role;
    age = p.age;
}

Player::~Player(){
    cout << "Destructor of Player being called"<<endl;
}

//others
void Player::print(){
    cout << "\n\nName : " << name << "\nLast name : "<<lastName;
    cout << "\nBirthday : " << birthday << "\nRole : "<<role;
    cout << "\nAge : " << age << "\nLocation : " << location;
    cout << "\nNumber : " << number << "\nNr of goals : "<<nr_goals;
    cout << "\nPosition : " << position << "\nLeft or right footed : "<<footed << endl;
}

void Player::incGoals(){
    nr_goals++;
}
