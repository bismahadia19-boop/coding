#include<iostream>
using namespace std;
main()
{
    int sum=0,userinput;
    cout<<"enter 5 numbers to add "<<endl;
    cin>>userinput;
    for(int n=1;n<=5;n++)
    {
        sum=sum+userinput;
        cin>>userinput;
    }
    cout<<"sum of numbers is "<<sum;
}