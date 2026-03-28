#include<iostream>
using namespace std;
main()
{
    string name[5];
    cout<<"enter the names of students "<<endl;
    for(int i=0;i<5;i++)
    {
    getline(cin,name[i]);
    }
    cout<<"Name of the students are "<<endl;
    for(int i=0;i<5;i++)
    {
    cout<<name[i]<<endl;
    }
}