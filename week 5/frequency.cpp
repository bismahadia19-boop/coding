#include<iostream>
using namespace std;
main()
{
	int number,digits,count=0,i,frequency;
	cout<<"enter numbers ";
	cin>>number;
	cout<<"enter digits ";
	cin>>digits;
	while(number>0)
	{
	int digit1=number%10;
	if(digit1==digits)
	{
      frequency=frequency+1;
	}
	number=number/10;
	}
	cout<<"Enter frequency "<<frequency;
}