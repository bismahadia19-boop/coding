#include<iostream>
using namespace std;
main()
{
    int n,sum=0;
    cout<<"enter the number of elments ";
    cin>>n;
    cout<<"enter the numbers "<<endl;
      for(int i=1;i<=n;i++)
    {
        int num[n];
        cin>>num[i];
        sum=sum+num[i];
    }
cout<<"sum of the numbers is "<<sum;
}