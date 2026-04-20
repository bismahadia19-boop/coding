#include<iostream>
using namespace std;
main()
{
	float mb;
	cout<<"enter the size in megabutes: ";
	cin>>mb;
	float oneMB=((mb/1024)/8);
	cout<<mb<<" MB ="<< oneMB;
}
