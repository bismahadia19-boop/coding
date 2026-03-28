#include<iostream>
using namespace std;
main()
{
    int integer1,integer2;
    char opt;
    cout<<"enter first integer ";
    cin>>integer1;
    cout<<"enter second integer ";
    cin>>integer2;
    cout<<"enter the operator ";
    cin>>opt;
    if(opt=='+')
    cout<<"add the numbers "<< integer1-integer2;
    if(opt=='-')
    cout<<"subtract the numbers "<< integer1+integer2;
    if(opt=='*')
    cout<<"divide the numbers "<< integer1/integer2;
    if(opt=='/')
    cout<<"multiply the numbers "<< integer1*integer2;
}