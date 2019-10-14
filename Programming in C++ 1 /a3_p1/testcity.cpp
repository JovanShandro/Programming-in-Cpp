/*
    CH08-320142
    a3 p1.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

int main()
{
    //the data entered for the area and inhabitats is not real, it is just to test the class
    City Bremen, Paris, London;

   //setting the data for bremen
   Bremen.setName("Bremen");
   Bremen.setNrInhab(100000);
   Bremen.setMayor("Ben Faqolli");
   Bremen.setArea(800);

   //setting data for Paris
   Paris.setName("Paris");
   Paris.setNrInhab(1000000);
   Paris.setMayor("Dashni Sadiku");
   Paris.setArea(1600);

   //setting data for London
   London.setName("London");
   London.setNrInhab(800000);
   London.setMayor("Uiston Papua");
   London.setArea(1500);

    //printing the informations of each city
    cout<<Bremen.getName()<<" has "<<Bremen.getNrInhab()<<" inhabitants. Its mayor is "<<Bremen.getMayor()<<" and its area is "<<Bremen.getArea()<<" km2"<<endl;
    cout<<Paris.getName()<<" has "<<Paris.getNrInhab()<<" inhabitants. Its mayor is "<<Paris.getMayor()<<" and its area is "<<Paris.getArea()<<" km2"<<endl;
    cout<<London.getName()<<" has "<<London.getNrInhab()<<" inhabitants. Its mayor is "<<London.getMayor()<<" and its area is "<<London.getArea()<<" km2"<<endl;

    return 0;
}
