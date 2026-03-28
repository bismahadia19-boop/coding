#include<iostream>
using namespace std;
main()
{
    string moviename[5]={"gladiater,starwars,terminaters,tomriders,takinglives"},userinput;
    int priceofticket=500,discount,i;
    cout<<"enter the name of movie "<<i+1<<" ";
    cin>>userinput;
    bool found=false;
    for(i=0;i<5;i++)
    {
        if(moviename[i]==userinput)
        {
            found=true;
        }
    if(i%2!=0)
    {
        int discount1=500*5/100;
        discount=priceofticket-discount1;
        cout<<"discount for odd index movies "<<discount;
    }
    else
    {
        int discount2=500*10/100;
        discount=priceofticket-discount2;
        cout<<"price for even index movies after discount "<<discount;
        break;
    }}
}