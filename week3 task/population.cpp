#include<iostream>
using namespace std;
main()
{
int population,birthpermonth;
cout<<"enter the current population of the world ";
cin>>population;
cout<<"enter the monthly birth per rate ";
cin>>birthpermonth;
int after3decades=population+(birthpermonth*30*12);
cout<<"population in three decades will be "<< after3decades;
}