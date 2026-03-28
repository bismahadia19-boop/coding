#include<iostream>
using namespace std;
main()
{
    while(true){
    string choice,bookname;
    cout<<"_______LIBRARY SYSTEM_______ ";
    cout<<"1. Add Books"<<endl;
    cout<<"2. View Books "<<endl;
    cout<<"3. Borrow Books "<<endl;
    cout<<"4. Issue book "<<endl;
    cout<<"5. Exit "<<endl;
    cout<<"Enter your choice ";
    cin>>choice;
    if(choice=="1")
    {
        cout<<"Enter book name ";
        cin>>bookname;
    }
    else if (choice=="2")
    {
        cout<<"View book "<<endl;
    }
    else if(choice=="3")
    {
        cout<<"Please Borrow your book "<<endl;
    }
    else if (choice=="4")
    {
        cout<<"you have Issued book "<<endl;
    }
    else
    {
    	cout<<"exit ";
    	break;
	}
}
}
