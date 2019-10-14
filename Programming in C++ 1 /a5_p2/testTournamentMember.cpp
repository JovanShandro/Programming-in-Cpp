/*
    CH08-320142
    a5 p2.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main(){

    TournamentMember t1;
    TournamentMember t2("Jovan","Shandro","2000-05-15","Player",18);
    TournamentMember t3(t2);

    //testing setters
    t1.setName("Tan");
    t1.setLastName("Gjoni");
    t1.setBirthday("1980-04-18");
    t1.setRole("Coach");
    t1.setAge(38);

    cout<<"\nTesting getters\n\n";
    cout<<"Name of t1: "<<t1.getName()<<endl;
    cout<<"Last name of t1: "<<t1.getLastName()<<endl;
    cout<<"Birthday of t1: "<<t1.getBirthday()<<endl;
    cout<<"Role of t1: "<<t1.getRole()<<endl;
    cout<<"Age of t1: "<<t1.getAge()<<endl;

    //printing the properties of the first instance
    cout << "\nPrinting the properties of t1\n";
    t1.print();

    //using the static method to change the location of the team
    TournamentMember::setLocation("Albania");

    //printing the properties of the 2 other instances
    cout << "\nPrinting the properties of t2\n";
    t2.print();

    cout << "\nPrinting the properties of t3\n";
    t3.print();

    cout << endl;
    return 0;
}
