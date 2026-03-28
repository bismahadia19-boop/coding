#include<iostream>
using namespace std;
main()
{
     while(true){
    string choice;
    cout<<"____MENU____"<<endl;
    cout<<"1. HELLO"<<endl;
    cout<<"GOODBYE "<<endl;
    cout<<"3. EXIT "<<endl;
    cout<<"Enter your choice ";
    cin>>choice;
    {
        if(choice=="1")
        cout<<"HELLO! WELCOME THE PROGRAM "<<endl;
        else if(choice=="2")
        cout<<"GOODBYE! Have a nice day"<<endl;
        else 
    {   cout<<"EXIT Terminate the program "<<endl;
        break;
    }
    }
     }
}