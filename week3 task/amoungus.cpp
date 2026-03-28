#include<iostream>
using namespace std;
main()
{
   int imposter,player,c;
   cout<<"enter imposter ";
   cin>>imposter;
   cout<<"enter player ";
   cin>>player ;
   c=100*(imposter/player);
   cout<<"chance of being imposter "<<c<<"%";
}
    