/*
    CH08-320143
    a2 p1.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
 
#include <iostream>
using namespace std;
 
/*
 function to find minimum in a generic array
*/
template <class T>
T array_min(T* array, int size)
{
    T key = array[0];
    for(int i = 0; i<size; i++)
    {
        if(array[i] < key)
        {
            key = array[i];
        }
    }
    return key;
}
//basic Complex class to test the function
class Complex{
    private:
        int real;
        int imag;
    public:
        Complex() {real = 0; imag = 0;}
        Complex(int r, int i){real = r; imag = i;}
        //overloading < operator
        bool operator < (const Complex& c)
        {
            // comparison is done without square root
            // as the result is the same so I did
            // it like this just for simplicity
            int a =this->real * this->real + 
                   this->imag * this->imag; 
            int b =c.real * c.real + 
                   c.imag * c.imag; 
            return( a<b);
        }
        friend ostream& operator<< (ostream& os, Complex c);
};
 
ostream& operator<< (ostream& os, Complex c)
{
    os<<noshowpos << c.real << showpos << c.imag << "i";
    return os;
}
 
 
int main()
{
    /*arrays of ints, doubles and Complex 
      objects to test the fundtion*/ 
    int i[] = {1, 2, 3, -4, 2, 6, 8, 5};
    double d[] = {1.2, 1.6, 6.2, 7.2};
    Complex c1(1,2), c2(2,4), c3(-1,5);
    Complex h[] = {c1, c2, c3};
    //printing the results of the function calls
    cout<<"Call on doubles: min is: "<<array_min(d, 4)<<endl;
    cout<<"Call on integers: min is: "<<array_min(i, 8)<<endl;
    cout<<"Call on Complex: min is: "<<array_min(h, 3)<<endl;
 
    cout<<endl;
    return 0;
}