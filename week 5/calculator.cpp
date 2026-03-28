#include<iostream>
using namespace std;
main()
{
    while(true){
    int n1,n2;
    char opt;
    string choice;
    cout<<"_______SIMPLE CALCULATOR_______ "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction "<<endl;
    cout<<"3. Multiplication "<<endl;
    cout<<"4. Division "<<endl;
    cout<<"5. Clear screan "<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"Enter your choice ";
    cin>>choice;
    if(choice=="1")
    {
        cout<<"enter first number ";
        cin>>n1;
        cout<<"enter second number ";
        cin>>n2;
        cout<<"Addition "<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
    }
    else if (choice=="2")
    {
        cout<<"enter first number ";
        cin>>n1;
        cout<<"enter second number ";
        cin>>n2;   
        cout<<"Subtraction "<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
    }
    else if(choice=="3")
    {
        cout<<"enter first number ";
        cin>>n1;
        cout<<"enter second number ";
        cin>>n2;
        cout<<"Multiplication "<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
    }
    else if (choice=="4")
    {
        cout<<"enter first number ";
        cin>>n1;
        cout<<"enter second number ";
        cin>>n2;
        cout<<"Division "<<n1<<"/"<<n2<<"="<<n1/n2<<endl;
    }
    else if(choice=="5")
    {
        cout<<"Screen cleared "<<endl;
    }
    else{
    cout<<"Exiting calculator Goodbye:) "<<endl;
    break;
    }
}
}   