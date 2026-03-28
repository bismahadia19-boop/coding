#include<iostream>
using namespace std;
main()
{
int age, moves;
cout<<"enter age of the person ";
cin>>age;
cout<<"enter the no of times they have moved ";
cin>>moves;
int average=age/(moves+1);
cout<<"average no of years lived in the same house :"<< average;
}