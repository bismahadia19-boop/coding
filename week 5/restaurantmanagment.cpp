#include<iostream>
using namespace std;
main()
{
    while(true){
    string choice;
    cout<<"_______RESTAURANT MANAGEMENT SYSTEM_______ ";
    cout<<"1. View Food Menu"<<endl;
    cout<<"2. Place Order "<<endl;
    cout<<"3. View order status "<<endl;
    cout<<"4. Generate bill "<<endl;
    cout<<"5. Contact staff "<<endl;
    cout<<"Exit"<<endl;
    cout<<"Enter your choice ";
    cin>>choice;
    if(choice=="1")
    {
        cout<<"You selected: View Food Menu "<<endl;
    }
    else if (choice=="2")
    {
        cout<<"You selected: Place Order"<<endl;
    }
    else if(choice=="3")
    {
        cout<<"You selected: Generate Bill "<<endl;
    }
    else if (choice=="4")
    {
        cout<<"You selected: Generate Bill "<<endl;
    }
    else if(choice=="5")
    {
        cout<<"You selected: Contact Staff "<<endl;
    }
    else{
    cout<<"Exiting Restaurant Management system "<<endl;
    break;
    }
}
}   