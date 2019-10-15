/*
    CH08-320143
    a1 p4.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
    int x;
    public:
          A(int i) { x = i; }
        void print() { cout << x; }
};
 
class B: virtual public A
{
    public:
         B():A(10) {  }
};
 
class C:  virtual public A 
{
    public:
        C():A(10) {  }
};
 
class D: public B, public C {
    public:
        D():A(10){}
};
 
int main()
{
    D d;
    d.print();
    return 0;
}
/*
    Explanation:
    Trying to compile the code before making 
    the change would result in the following errors:
    -use of deleted function 'D::D()'
    -no matching function for call to 'A::A()'
    The errors occur as there is no default constructor
    defined in class A which class D can call on, 
    and that leads to class D not being able to be 
    initialized. The fix is to create a default constructor
    specifically for class D that directly initiates a base
    class A with class A's parametric constructor.
*/
