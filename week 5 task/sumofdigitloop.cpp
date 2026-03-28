#include<iostream>
using namespace std;
main()
{
    int num,count=0,i,sum=0,digit;
    cout<<"enter number ";
    cin>>num;	
    while(num>0)
    {
    digit=num%10;
    sum=sum+digit;
    num=num/10;
    }
    cout<<"sum of digits "<<sum;
}
