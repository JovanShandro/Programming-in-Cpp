#include <iostream>
#include "City.h"
using namespace std;

City::City(){
    //empty constructor
}

void City :: setName(string newname){
    name = newname;
}

void City :: setNrInhab(int newnr){
    nrInhab = newnr;
}

void City :: setMayor(string newmayor) {
    mayor = newmayor;
}

void City :: setArea(double newarea){
    area = newarea;
}

string City :: getName(){
    return name;
}

string City :: getMayor(){
    return mayor;
}

int City :: getNrInhab(){
    return nrInhab;
}

double City :: getArea(){
    return area;
}


