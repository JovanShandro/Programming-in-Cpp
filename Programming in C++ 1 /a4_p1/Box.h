#ifndef BOX_H
#define BOX_H


class Box
{
    private:
           double height;
           double width;
           double depth;

    public:
        Box();
        Box(double, double, double);
        Box(const Box&);
        ~Box();
        //setters
        void setHeight(double newheight);
        void setWidth(double newwidth);
        void setDepth(double newdepth);
        //getters
        double getWidth();
        double getHeight();
        double getDepth();
        //other
        double volume();
};

#endif // BOX_H
