/*
    CH08-320142
    a5 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H
#include <iostream>
#include <cstring>

class TournamentMember
{

    protected:
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

};

class Player : public TournamentMember{

    private:
        int number;
        std::string position;
        int nr_goals;
        std::string footed;

    public:
        //ctor and dtor
        Player();
        Player(const char *, const char *, const char *,
               int ,int ,std::string ,int , std::string);
        Player(const Player&);
        ~Player();
        //setters
        void setNumber(int n) { number = n; }
        void setPosition(const std::string& p) { position = p; }
        void setFooted(const std::string& f) { footed = f; }
        //getters
        int getNumber() { return number; }
        int getNrGoals() { return nr_goals; }
        std::string getPosition() { return position; }
        std::string getFooted() { return footed; }
        //other
        void print();
        void incGoals();

};

class Referee : public TournamentMember {
    private:
        int yellowCardCount;
        Player *yellowCardList[40];
        int redCardCount;
        Player *redCardList[40];
    public:
        Referee();
        Referee(const char * n,const char *l,const char *b,int a);//both lists initialized as Null
        Referee(const char * n,const char *l,const char *b,int a, int ycount , Player **yellowList ,
                int rcount, Player **redList);
        ~Referee();
        //setters
        void setYellowCardCount(int y);
        void setRedCardCount(int r);
        void setYellowCardList(Player **);
        void setRedCardList(Player **);
        //getters
        int getYellowCardCount();
        int getRedCardCount();
        //others
        bool addToYellowCardList(Player *p);
        bool addToRedCardList(Player *p);
        void print();

};

#endif // TOURNAMENTMEMBER_H

