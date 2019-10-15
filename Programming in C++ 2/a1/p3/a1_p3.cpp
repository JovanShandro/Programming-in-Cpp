/*
    CH08-320143
    a1 p3.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
  int x;
    public:
      void setX(int i) {x = i;}
      void print() { cout << x; }
};
 
class B: virtual public A
{
    public:
      B()  { setX(10); }
};
 
class C: virtual public A  
{
    public:
      C()  { setX(20); }
};
 
class D: public C, public B {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}
 
/*
    Explanation:
    Trying to compile the code before the change
    would result in an error saying that the member
    'print' is ambiguous. This means that, as both 
    B and C inherit from A, they both do now have a 
    print() function, and when we type the command :
    d.print(); the compiler does not know which of the 2
    to call. A possible solution is to make the call 
    d.B::print() which would print 10 or d.C::print() 
    which would print 20, this way specifying which function
    to call, or we can make the inheritances of B and C from A
    virtual, and thus there would be only on print() funciton
    shared among the classes so the call d.print() won't
    result in an error. In this case d.print() will 
    print 20 as in the inheritances of D, C comes after B;
    if we would change the order of the inheritance to
    D : public C, public B then it would print 10. 
*/