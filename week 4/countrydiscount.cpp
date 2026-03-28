#include<iostream>
using namespace std;
main()
{
    string countryname;
    int ticketprice;
    cout<<"enter country name ";
    cin>>countryname;
    cout<<"enter ticket price ";
    cin>>ticketprice;
    int discount=ticketprice*5/100;
    int afterdiscount=ticketprice-discount;
    if(countryname == "ireland")
    {
        cout<<"ticket price after discount "<<afterdiscount;

    }
    else
    cout<<"ticket price is "<<ticketprice;
}