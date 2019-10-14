#include <iostream>
#ifndef CITY_H
#define CITY_H

using namespace std;
class City
{
    private:
        string name;
        int nrInhab;
        string mayor;
        double area;

    public:
        City();
        //setters
        void setName(string newname);
        void setNrInhab(int newnr);
        void setMayor(string newmayor);
        void setArea(double newarea);
        //getters
        string getName();
        string getMayor();
        int getNrInhab();
        double getArea();

};

#endif // CITY_H
