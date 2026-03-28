#include<iostream>
using namespace std;
main()
{
    int num[5]={1,2,3,4,5},sum=0;
    float avg;
    for(int i=1;i<=5;i++)
    {
        sum=sum+i;
        avg=sum/5;
    }
cout<<"sum of numbers is "<<sum<<endl;
cout<<"average of numbers is "<<avg;
}