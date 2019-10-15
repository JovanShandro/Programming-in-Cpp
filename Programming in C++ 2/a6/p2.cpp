/*
    CH08-320143
    a6 p2.cpp
    Jovan Shandro
    jshandrp@jacobs-university.de
*/
 
#include <iostream>
#include <sstream>
using namespace std;
 
void foo(int *array, int n, int *odds) {
    for(int i=0; i<n; i++)
        if (array[i] % 2 == 1)
            (*odds)++;
}
 
class Test {
    private:
        double *a;
        int n;
    public:
        Test() {
            a=NULL;
            n=0;
        }
        Test(double *a, int n) {
            this->n = n;
            if (this->a != NULL) {
                delete this->a;
            }
            this->a = new double[n];
            for(int i=0; i<n; i++)
                this->a[i] = a[i];
        }
        string toString() {
            ostringstream ss;
            ss << "Length: " << n << endl << "Elements: ";
            for(int i=0; i<n; i++)
                ss << a[i] << " ";
            ss << endl;
            return ss.str();
        }
        ~Test() {
            delete a;
        }
};
 
int main() {
    int array[3] = {1, 2, 3};
    int odd_values=0;
    foo(array, 3, &odd_values);
    cout << "Amount of odd values in the array=" << odd_values << endl;
    Test arr[5];
    double v[3] = {1.2, 2.3, 3.45};
    Test *obj1;
    obj1=&arr[0];
    Test *obj2 = new Test(v, 3);
    Test *obj3 = NULL;
    cout << obj1->toString();
    cout << obj2->toString();
    //cout << obj3->toString();
    //delete obj1;
    delete obj2;
    delete obj3;
    return 0;
}
/*
    we set breakpoint on lines 15, 52,
    , 59, 62 and 63. We choose them as
    we want to check what happens to the variable
    odds inside the function as it prints the 
    wrong result, and we want to check what happens
    with the null object obj3 that throws the
    segmentation fault error. Stepping into the
    foo function and printing odds we see that
    the value does not increase and that happens
    because we are not changing the value as
    we have forgotten the brackets. So using
    (*odds)++ will increase the value the pointer
    points to and not the address. So this solves the first
    mistake. Now when printing obj3 we get a null object,
    0. So later on when stepping into the toString of 
    object 3, we see the error is generated when 
    trying to put the size of the array of the object
    into the stream, but we have a null object so
    we can not use the toString method in obj3. So 
    to get rid of the error we just remove line 62.
    When getting rid of the segmentation fault we get
    another error and using the break point at line 63
    we see that it is because we are trying to delete
    obj1, which results in an error as by the way we 
    initialized obj1, we can not use delete on as
    we reserved no memory using new. So getting rid of the 
    delete obj1 line, the program works fine.
*/