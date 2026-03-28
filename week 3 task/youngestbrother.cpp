#include<iostream>
using namespace std;
main()
{
   int age1,age2,age3;
   string bro1,bro2,bro3;
   cout<<"enter the name of first brother ";
   cin>>bro1;
   cout<<"enter the age of first brother " ;
   cin>>age1;
   cout<<"enter the name of second brother ";
   cin>>bro2;
   cout<<"enter the age of second brother ";
   cin>>age2;
   cout<<"enter the name of third brother ";
   cin>>bro3;
   cout<<"enter the age of third brother ";
   cin>>age3;
   if(age1<age2)
   {
      if(age1<age3)
      cout<<bro1 <<" is the youngest brother";
   }
   if(age2<age3)
   {
      if(age2<age1)
      cout<<bro2<<" is the youngest brother";
   }
   if(age3<age1)
   {
      if(age3<age2)
      cout<<bro3<<" is the youngest brother";  
   }
}