#include<iostream>
using namespace std;
main()
{
    int bill;
    cout<<"enter your bill ";
    cin>>bill;
    int discount1=bill*5/100;
    int discountedbill=bill-discount1;
    int discount2=bill*10/100;
    int discountedbill2=bill-discount2;
    if(bill<=5000)
    cout<<"your discounted bill "<< discountedbill;
    if(bill>5000) 
    cout<<"your discounted bill is "<< discountedbill2;
}