#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"enter name ";
    cin>>name;
    while(name!="end")
    {
        cout<<"hello "<<name<<endl;
        cout<<"enter name ";
        cin>>name;
    }
    cout<<"end";
}