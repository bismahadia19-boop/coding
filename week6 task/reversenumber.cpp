#include<iostream>
using namespace std;
main()
{   int n;
    cout<<"enter numbers of digits ";
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
    cout<<"enter numbers ";
    cin>>num[i];
    }
    cout<<"enter numbers in reverse ";
    for(int i=n-1;i>=0;i--)
    {
        cout<<num[i];
    }

}