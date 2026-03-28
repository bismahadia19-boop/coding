#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"enter the number of students ";
    cin>>n;
    string name[n];
    cout<<"enter the names of students "<<endl;
         cin.ignore();
    for(int i=0;i<n;i++)
    {
    getline(cin,name[i]);
    }
    cout<<"Name of the students in alphabetic order "<<endl;
    for(int i=0;i<n;i++)
    {
    for(int j=i+1;j<n;j++)
    {
        if(name[i]>name[j])
        {
            string hold=name[i];
            name[i]=name[j];
            name[j]=hold;
        }
    }
    }
    for(int i=0;i<n;i++)
    {
        cout<<name[i]<<endl;
    }
}