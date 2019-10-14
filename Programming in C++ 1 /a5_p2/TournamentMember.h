/*
    CH08-320142
    a5 p2.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H
#include <iostream>
#include <cstring>

class TournamentMember
{

    private:
        char name[36];
        char lastName[36];
        char birthday[11];
        static std::string location;
        std::string role;
        int age;

    public:
        TournamentMember();
        TournamentMember(const char *,const char *,const char *,const std::string& ,int);
        TournamentMember(const TournamentMember&);
        ~TournamentMember();
        //setters
        void setName(const char* n) { strcpy(name,n); }
        void setLastName(const char* ln) { strcpy(lastName,ln); }
        void setBirthday(const char* nbd) { strcpy(birthday,nbd); }
        void setRole(const std::string& r) { role = r; }
        void setAge(int a) { age = a; }
        //getters
        char* getName() { return name; }
        char* getLastName() { return lastName; }
        char* getBirthday() { return birthday; }
        std::string getRole() { return role; }
        int getAge() { return age; }
        //others
        void print();
        static void setLocation(const std::string& l) { location = l; }
        static std::string getLocation() { return location; }
        //did not know if getter was needed so I included it

};


#endif // TOURNAMENTMEMBER_H

