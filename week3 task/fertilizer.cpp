#include<iostream>
using namespace std;
main()
{
int weight,price,area;
cout<<"enter weight of fertilizer bag ";
cin>>weight;
cout<<"enter price of the bag ";
cin>>price;
cout<<"enter the area of bag can cover ";
cin>>area;
int eachpound=price/weight;
int eachsquare=price/area;
cout<<"price of fertilizer for each pound "<<eachpound<<endl;
cout<<"cost of using the fertilizer for each sqaure "<<eachsquare;
}