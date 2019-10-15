/*
    CH08-320143
    a1 p2.cpp
    Jovan Shandro
    jshandro@jacobs-university.de
*/
#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
    int n;
    char nl = '\n';
    // read the number of files
    cin >> n; 
    //store names of the files
    string names[n];
    //input files
    ifstream f[n];
    //the output file
    ofstream conc;
    //make sure conc is empty so truncate it
    conc.open("concatn.txt", ios::binary | ios::out | ios::trunc);
    if(!conc.is_open())
    {
        cout<<"concatn.txt could not be opened"<<endl;
        exit(1);
    }
    //read the names of the files, read their content and 
    //concatenate it to the ouput file
    for(int i = 0; i<n; i++)
    {
        //read the name first
        cin >> names[i];
        //open the file
        f[i].open(names[i], ios::binary| ios::in);
        if(!f[i].is_open())
        {
            cout << "f[i] could not be opened for i = " << i<<endl;
            exit(2);
        }
        //find the size of f[i]
        f[i].seekg(0, ios::end);
        ios::pos_type pos = f[i].tellg();
        long size = (long)pos -1;
        f[i].seekg(0, ios::beg);
        //create the buffer and do the concatenation
        char buffer[(int)size];
        f[i].read(buffer, sizeof(buffer));
        conc.write(buffer, sizeof(buffer));
        conc.write(&nl, sizeof(nl));
 
    }
    //close the files
    for(int i = 0; i<n; i++)
        f[i].close();
    conc.close();
    
    cout<<endl;
    return 0;