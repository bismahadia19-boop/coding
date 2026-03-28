#include<iostream>
using namespace std;
main()
{
   int time,acceleration,vi,vf;
   cout<<"enter time ";
   cin>>time;
   cout<<"enter acceleration ";
   cin>>acceleration;
   cout<<"enter intial velociy ";
   cin>>vi;
   vf=acceleration*time+vi;
   cout<<"final velocity is "<<vf;
}
    