#include<iostream>
using namespace std;
main()
  {
    int num[100],findnum,i;
    bool found=false;
    for(int i=0;i<10;i++){
    cout<<"enter number "<<i+1<<" ";
    cin>>num[i];} 
  cout<<"enter number to find ";
  cin>>findnum;
    for(int i=0;i<10;i++){  
  if(num[i]==findnum)
  {
    found=true;
  }}
   if(found)
   cout<<"number is present ";
  else
  cout<<"not present ";
  }