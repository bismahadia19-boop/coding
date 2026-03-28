#include<iostream>
using namespace std;
main()
{
    int n1=0,n2=1,n3,n;
    cout<<"number of series you want to print ";
    cin>>n;
    cout<<n1<<" ";
    cout<<n2<<" ";
    for(int x=1;x<=n;x++)
    {
       n3=n1+n2;
       cout<<n3<<" ";
       n1=n2;
       n2=n3; 
    }

}