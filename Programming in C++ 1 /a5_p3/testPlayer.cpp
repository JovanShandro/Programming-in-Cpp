/*
    CH08-320142
    a5 p3.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main(){

    Player p1;
    Player p2("Artur", "Qullaci", 
              "1998-11-01", 20, 3,
              "Goalkeeper", 0, "right");
    Player p3("Macok", "Avdalli", 
              "1999-08-12", 19, 10,
              "Midfielder", 4, "left");
    //p4 to test copy constructor
    Player p4(p3);

    //testing incGoals
    p2.incGoals();

    //testing setters
    p1.setName("Qazim");
    p1.setLastName("Mbiemri");
    p1.setBirthday("1992-04-27");
    p1.setRole("Player");
    p1.setAge(26);
    p1.setNumber(99);
    p1.setPosition("Striker");
    p1.setFooted("left");

    //changing locations of all to Hamburg
    TournamentMember::setLocation("Hamburg");

    p1.print();
    p2.print();
    p3.print();
    p4.print();

    cout << endl;
    return 0;
}
