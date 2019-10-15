/*
    CH08-320143
    a6 p1.cpp
    Jovan Shandro
    jshandrp@jacobs-university.de
*/
 
#include <iostream>
using namespace std;
 
int find(int a[], int nr, int el) {
    for(int i=0; i<=nr; i++)
        if (a[i] == el)
            return i;
    return -1;
}
 
unsigned long difference(unsigned long a, unsigned long b) {
    if (a-b<0)
        return b-a;
    else
        return a-b;
}
 
int main() {
    int n, val;
    cout << "n=";
    cin >> n;
    int *v=new int[n];
    cout << "Elements the elements of array:" << endl;
    for(int i=0; i<n; i++)
        cin >> v[i];
    cout << "val=";
    cin >> val;
    int result = find(v, n, val);
    cout << "Position of the searched element=" << result << endl;
    delete v;
    unsigned long x, y;
    x=550000;
    y=550005;
    cout << "Difference=" << difference(x, y) << endl;
    return 0;
}
 
/*
    We put breakpoints in the lines, 12 
    , 19, 35, and 41. Line 12 because because
    we get the wrong position for array 1 2 3 4
    while setting val 0. Line 19 because we get 
    the wrong result for the difference while
    expecting 5. And Lines 35 and 41 because in 
    these lines we call each function.
    When reaching the breakpoint of the find
    function for the array above, we continuously
    print i and a[i], and we see that for that case
    the loop runs one more time than expected since
    apparently there is a mistake in the for loop 
    as the condition is i<=nr when it should be i<nr 
    since the last index of the array is one smaller
    than its size. Getting rid of the = sign solves the
    error. Than stepping into the difference function,
    we notice that even though in our case a is 
    smaller than b, the function returns a-b. This 
    happens as taking the difference a-b of 2
    unsigned numbers automatically returns an 
    unsigned number, so >0 thus the condition
    of the if statement is always false no matter
    what values a and b have. To get rid of the error
    we just substitute a-b<0 with a<b. Now the
    program runs fine.
 
*/