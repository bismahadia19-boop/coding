#include<iostream>
using namespace std;
main()
{
    int n,count=0;
    cout<<"enter numbers ";
    cin>>n;
    for(int i=n;i>0;i=i/10)
    {
       count=count+1;
    }
    cout<<"number of digits is  "<<count; 
}