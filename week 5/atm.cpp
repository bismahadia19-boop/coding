#include<iostream>
using namespace std;
main()
{
    string password,choice;
    for(int i=1;i<=3;i++)
 {
    { cout<<"Enter password ";
      cin>>password;
}
    if(password=="1234")
   { cout<<"Login successfull "<<endl;
     break;
    }
   else
   cout<<"Try again "<<endl;
   if(i==3&&!(password=="1234"))
   {
    cout<<"you have attempted many attemps. Program ends";
    return 0 ;
   }}
for(int i=1;i<=5;i++){
cout<<"1. Check balance "<<endl;
cout<<"2. Deposite money"<<endl;
cout<<"3. Withdraw money "<<endl;
cout<<"4. Exit "<<endl;
cout<<"enter choice ";
cin>>choice;
if(choice=="1")
{
    int balance;
    cout<<"enter balance ";
    cin>>balance;
    cout<<"current balance "<<balance<<endl;
}
else if(choice=="2")
{
    int deposit;
    cout<<"Enter depoite money ";
    cin>>deposit;
    cout<<"DEposited amount "<<deposit<<endl;
    cout<<"Money deposited successfully "<<endl;
}
else if(choice=="3")
{
    int withdraw;
    cout<<"enter money to withdraw ";
    cin>>withdraw;
    cout<<"withdraw amount  "<<withdraw<<endl;
    cout<<"Please collect your cash "<<endl;
}
else if(choice=="4")
{
    cout<<"Thank you for using ATM "<<endl;
    break;
}
else
cout<<"invalid choice ";}
}