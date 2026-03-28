#include<iostream>
using namespace std;
main()
{
    char letter;
    int n,count=0;
    cout<<"enter the number of customers ";
    cin>>n;
    string name[n];
    cout<<"enter the name of the customers "<<endl;
    for(int i=0;i<n;i++)

    {
        cin.ignore();
        getline(cin,name[i]);
    }
    cout<<"enter a letter to check ";
    cin>>letter;
    for(int i=0;i<n;i++)
    {
        if(name[i][0]==letter)
        {
            count++;
        }
    }
    cout<<"total customers whose name starts with "<<letter<<" are "<<count;
}