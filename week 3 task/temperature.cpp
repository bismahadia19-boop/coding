#include<iostream>
using namespace std;
main()
{
    int temperature1,temperature2;
    cout<<"Enter the temperture first city ";
    cin>>temperature1;
    cout<<"enter the temperature of second city ";
    cin>>temperature2;
    if(temperature1-temperature2>10)
    cout<<"differnce is too big";
    else
    cout<<"program ends";
}