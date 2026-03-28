#include<iostream>
using namespace std;
main()
{
int squaremeter,height,width;
cout<<"enter squaremeter i can paint ";
cin>>squaremeter;
cout<<"enter height of the wall ";
cin>>height;
cout<<"enter width of the wall ";
cin>>width;
int no_ofwalls=squaremeter/(height*width);
cout<<"no of wall i can paint :"<< no_ofwalls;
}