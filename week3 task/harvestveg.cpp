#include<iostream>
using namespace std;
main()
{
float Ncoins,Mcoins;
int totalkgofveg,totalkgoffruits;
cout<<"Enter vegetables price per kilogram(in coins)  ";
cin>>Ncoins;
cout<<"Enter fruits price per kilogram(in coins)  ";
cin>>Mcoins;
cout<<" total vegetables sold in kilogram";
cin>>totalkgofveg;
cout<<"total fruits sold in kilogram";
cin>>totalkgoffruits;
int totalpricevegetables=Ncoins*totalkgofveg;
int totalpricefruits=Mcoins*totalkgoffruits;
int totalearning=totalpricevegetables+totalpricefruits;
float inrupees= totalearning*1.94;
cout<<"total earning of fruits and vegetables in rupees"<<inrupees;
}