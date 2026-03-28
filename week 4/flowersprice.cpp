#include<iostream>
using namespace std;
main()
{
    int redrose,tulip,whiterose;
    cout<<"enter the number of red roses ";
    cin>>redrose;
    cout<<"enter the number of white rose ";
    cin>>whiterose;
    cout<<"enter the number of tulips ";
    cin>>tulip;
    float priceofred_rose=2.00;
    float priceof_tulip=2.50;
    float priceofwhite_rose=4.10;
    float total=priceofred_rose*redrose+priceof_tulip*tulip+priceofwhite_rose*whiterose;
    int discount=total*20/100;
    float payable=total-discount;
    if(total>200)
    {cout<<"original price "<< total<<endl;
    cout<<"payable price "<< payable;}
    else
    cout<<"real price"<<total;
}   