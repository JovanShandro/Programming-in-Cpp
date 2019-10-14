/*
    CH08-320142
    a1 p2.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/

#include <iostream>

using namespace std;

int main()
{
  int n;
  double x;
  string s;

  cout<<"Please enter the integer"<<endl;
  cin>>n;//reads the int
  cout<<"Please enter the double"<<endl;
  cin>>x;//reads the double
  cout<<"Please enter the string"<<endl;
  cin>>s;//reads the string

  for(int i =0; i<n; i++){
    cout<<s<<":"<<x<<endl;
  }

  return 0;
}
