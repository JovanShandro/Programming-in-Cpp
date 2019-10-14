/*
    CH08-320142
    a5 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <cstring>
#include "TournamentMember.h"
using namespace std;


//tournament member class
TournamentMember::TournamentMember(){
    cout << "Default constructor of TournamentMember being called"<<endl;
}

TournamentMember::TournamentMember(const char * n, const char *l,
                                   const char *b, const string& r, int a) : role(r){
    cout << "Parametric constructor of TournamentMember being called"<<endl;
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
    cout << "Destructor of TournamentMember being called"<<endl;
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
    cout << "\nDestructor of Player being called"<<endl;
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

//Referee class
Referee::Referee(){
    cout << "Default constructor of Referee called" << endl;
    int i;
    yellowCardCount = redCardCount =0;
    for(i=0; i<40 ; i++){
        yellowCardList[i] = NULL;
        redCardList[i] = NULL;
    }
}

Referee::Referee(const char *n,const char *l,const char *b, int a)
        : TournamentMember(n,l,b,"Referee",a){

    cout << "Parametric constructor of Referee called" << endl;
    int i;
    yellowCardCount = redCardCount =0;
    for(i=0; i<40 ; i++){
        yellowCardList[i] = NULL;
        redCardList[i] = NULL;
    }
}

Referee::Referee(const char * n,const char *l,const char *b,int a, int ycount , Player **yellowList ,
                int rcount, Player **redList) :
                    TournamentMember(n,l,b,"Referee",a){
    int i;
    yellowCardCount = ycount;
    redCardCount = rcount;

    for(i=0; i<yellowCardCount; i++){
        yellowCardList[i] = yellowList[i];
    }
    for(i = yellowCardCount; i<40; i++){
        yellowCardList[i] = NULL;
    }

    for(i=0; i<redCardCount; i++){
        redCardList[i] = redList[i];
    }
    for(i = redCardCount; i<40; i++){
        redCardList[i] = NULL;
    }
}

Referee::~Referee(){
    //dcon
    cout << "Destructor of Referee called" << endl;
}

//setters
void Referee::setYellowCardCount(int y){
    yellowCardCount = y;
}

void Referee::setRedCardCount(int r){
    redCardCount = r;
}

void Referee::setYellowCardList(Player ** p1){
    int i;
    for(i=0; i<yellowCardCount; i++){
        yellowCardList[i] = p1[i];
    }
    for(i = yellowCardCount; i<40; i++){
        yellowCardList[i] = NULL;
    }
}
void Referee::setRedCardList(Player ** p1){
    int i;
    for(i=0; i<redCardCount; i++){
        redCardList[i] = p1[i];
    }
    for(i = redCardCount; i<40; i++){
        redCardList[i] = NULL;
    }
}
//getters
int Referee::getYellowCardCount(){
    return yellowCardCount;
}

int Referee::getRedCardCount(){
    return redCardCount;
}

//others

bool Referee::addToYellowCardList(Player *p){
    int i,indexofp;
    Player *a;
    bool isOnYList = false, isOnRList = false;

    for(i =0; i<40; i++){
        //checks if player is on list
        if(yellowCardList[i] == p){
            isOnYList = true;
            indexofp = i;
            break;
        }
    }

    if(!isOnYList){
        //if it is not then add it
        for(i=0 ;i<40; i++){
            if(yellowCardList[i] == NULL){
                yellowCardList[i] = p;
                yellowCardCount++;
                return true;
            }
        }
    }else{
        //if the player already was in list take it out of yellow list
        //and add it to red list
        yellowCardList[indexofp] = NULL;
        for(i=39; i>=0; i--){
            if(yellowCardList[i] != NULL){
                    a = yellowCardList[i];
                    yellowCardList[i] = yellowCardList[indexofp];
                    yellowCardList[indexofp] = a;
                    yellowCardCount--;
                    break;
            }
        }
        for(i =0; i<40; i++){
            if(redCardList[i] == p){
                isOnRList = true;
            }
        }
        if(!isOnRList){
            for(i=0 ;i<40; i++){
                if(redCardList[i] == NULL){
                    redCardList[i] = p;
                    redCardCount++;
                    break;
                }
            }
        }
    }
    return false;
}

bool Referee::addToRedCardList(Player *p){
    int i;
    bool isOnRList = false;
        for(i =0; i<40; i++){
            //checks if player is on list
            if(redCardList[i] == p){
                isOnRList = true;
            }
        }
        if(!isOnRList){
            //if it is not then add it
            for(i=0 ;i<40; i++){
                if(redCardList[i] == NULL){
                    redCardList[i] = p;
                    redCardCount++;
                    return true;
                }
            }
        }
    return false;
}

void Referee::print(){
    int i;

    cout<<"\nPrinting yellow card list: \n\n";
    for(i=0; i<40; i++){
        if(yellowCardList[i]!=NULL){
            cout << "\nPlayer " << i+1 << ": ";
            yellowCardList[i]->print();
        }else{
            break;
        }
    }

    cout<<"\nPrinting red card list: \n\n";
    for(i=0; i<40; i++){
        if(redCardList[i]!=NULL){
            cout << "\nPlayer " << i+1 << ": ";
            redCardList[i]->print();
        }else{
            break;
        }
    }
}
