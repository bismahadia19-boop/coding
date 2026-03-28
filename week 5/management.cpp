#include<iostream>
using namespace std;
main()
{
    string password, username, name;
    cout<<"____MANAGMENT OF UNIVESITY_____"<<endl;
    for(int i=1;i<=3;i++)
    {
         cout<<"Enter username ";
         cin>>username;
         cout<<"Enter password ";
         cin>>password;
        if(password=="1234"  && username=="admin")
        {
           cout<<"Login successful "<<endl;
           break;
        }
        else
        {cout<<"try again"<<endl;}
        if(i==3&&!(username=="admin"&&password=="1234"))
        {cout<<"Too many attempts. Program ends ";
        return 0;}
        }
        for(int i=1;i<=5;i++){
     string userask,studentcourse;
     int age;
     cout<<"1. Add student "<<endl;
     cout<<"2. View student "<<endl;
     cout<<"3. Add course "<<endl;
     cout<<"4. exit"<<endl;
     cout<<"enter choice ";
     cin>>userask;
     if(userask=="1")
     {
        cout<<"enter student name ";
        cin>>name;
        cout<<"enter student age ";
        cin>>age;
        cout<<"student added successfully "<<endl;
    
     }
     else if(userask=="2")
    {
        cout<<"Student name : "<<name<<endl;
        cout<<"Student age : "<<age<<endl;
    }
     else if (userask=="3")
     {
        cout<<"enter student course ";
        cin>>studentcourse;
     }
     else if(userask=="4"){
     cout<<"Program exit "<<endl;
     break;}
     else
     cout<<"invalid choice ";
    }
}
