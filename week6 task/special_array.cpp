#include<iostream>
using namespace std;
main()
{ 
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
   int num[size];
     cout<<"enter numbers "<<endl;
     bool special=true;
   for(int i=0;i<size;i++)
   {
    cin>>num[i];
   }
   for(int i=0;i<size;i++)
   {
    if(i%2==0&&num[i]%2!=0)
    {
      special=false;
      break;
    }
    if(i%2!=0&&num[i]%2==0)
    {
       special=false;
       break;
    }
   }
   if(special)
   {
    cout<<"the array is special ";
   }
   else
   cout<<"array is not special ";

}