#include<iostream>
using namespace std;
main()
{
    int age,machineprice,toyprice;
    cout<<"enter lilly age ";
    cin>>age;
    cout<<"enter price of machine ";
    cin>>machineprice;
    cout<<"enter price of each toy ";
    cin>>toyprice;
    int giftmoney=10,savedmoney=0,toy=0;
    for(int i=1;i<=age;i++)
    {
        if(i%2==0)
        {
            savedmoney+=(giftmoney-1);
            giftmoney+=10;
        }
        else
        {
            toy=toy+1;
        }
    }
    int toymoney=toy*toyprice;
    int totalmoneysaved=toymoney+savedmoney;
    if(machineprice<=totalmoneysaved)
    {
        cout<<"YES ";
        int remaining=totalmoneysaved-machineprice;
        cout<<"remanining money "<<remaining;
    }
    else
   { cout<<"NO ";
    int insufficientmoney=machineprice-totalmoneysaved;
    cout<<" you don't have enough money "<<insufficientmoney;}
}