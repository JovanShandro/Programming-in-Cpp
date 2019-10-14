#include "Box.h"

Box :: Box()
{
    //default constructor
}

Box :: Box(double h, double w, double d){
    height = h;
    width = w;
    depth = d;
}

Box :: Box(const Box& b){
    height = b.height;
    width = b.width;
    depth = b.depth;
}

Box :: ~Box()
{
    //dtor
}

//setters
void Box :: setHeight(double newheight){
    height = newheight;
}

void Box :: setWidth(double newwidth){
    width = newwidth;
}

void Box :: setDepth(double newdepth){
    depth = newdepth;
}

//getters
double Box :: getWidth(){
    return width;
}

double Box :: getHeight(){
    return height;
}

double Box :: getDepth(){
    return depth;
}
//others
double Box :: volume(){
    return height*width*depth;
}
