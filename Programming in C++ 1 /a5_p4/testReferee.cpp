/*
    CH08-320142
    a5 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main()
{
    Player *p1 = new Player("Artur", "Qullaci", "1998-11-01", 20, 3, "Goalkeeper", 0, "right");
    Player *p2 = new Player("Mico", "Avdalli", "1999-08-12", 19, 10, "Midfielder", 4, "left");
    Player *p3 = new Player("Adrian", "Naco", "1995-01-8", 23, 100, "Striker", 7, "left");
    Player *p4 = new Player("Bexhet", "Pacolli", "1991-01-8",27, 17, "Goalkeeper", 0, "right");
    Player *p[2] = {p1,p2};
    Player *P[2] = {p3,p4};
    Referee r("Jovan","Shandro", "2000-05-15", 18);
    Referee r1("Jovan2","Shandro2", "1999-05-16", 19 , 2 , p , 2 , P);

    //to make the out put more readable
    cout<<"*****************************Referee r*********************************\n";

    bool a = r.addToYellowCardList(p1);//return true and adds p1 to yellow list
    bool b = r.addToYellowCardList(p2);//return true and adds p2 to yellow list
    bool c = r.addToYellowCardList(p2);//return false and adds p2 to red list
    bool d = r.addToYellowCardList(p3);//return true and adds p1 to yellow list
    bool e = r.addToRedCardList(p4);//return true and adds p4 to red card list
    //printing to see is the players were added to the list
    r.print();

    //to check the values returned by boolean functions
    if(a){
        cout<<"\nThis will be printed as a is true\n";
    }

    if(b){
        cout<<"\nThis will be printed as b is true\n";
    }

    if(c){
        cout<<"\nThis will not be printed as c is false\n";
    }

    if(d){
        cout<<"\nThis will be printed as d is true\n";
    }
    if(e){
        cout<<"\nThis will be printed as e is true\n";
    }

    //test the counters
    cout<<"\nYellow Card List has "<<r.getYellowCardCount()<<" entries"<<endl;
    cout<<"\nRed Card List has "<<r.getRedCardCount()<<" entry"<<endl;
    cout<<"********************************************************************\n\n";

    cout<<"*****************************Referee r1*********************************\n";

    a = r1.addToYellowCardList(p1);// p1 is removed from yellow list and goes to red list
    r1.print();

    cout<<"********************************************************************\n\n";


    delete p1;
    delete p2;
    delete p3;
    delete p4;

    cout<<endl;
    return 0;
}
