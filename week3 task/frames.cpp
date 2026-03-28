#include<iostream>
using namespace std;
main()
{
	int length, frames,lengthinsec;
	cout<<"enter the length in minutes=";
	cin>>length;
	cout<<"enter the frame in per sec=";
	cin>>frames;
        lengthinsec=length*60*frames;
        cout<<"your total number of frames "<<lengthinsec;
        
}