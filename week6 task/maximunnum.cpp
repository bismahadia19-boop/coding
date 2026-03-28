#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"enter number of digits you want to print ";
    cin>>n;
    int max,num[n],i;
    for(i=0;i<n;i++){
    cout<<"enter numbers ";
    cin>>num[i];}
    max=num[0];
    for(i=0;i<n;i++){
    {
       if(max<num[i])
       max=num[i];
    }}
    cout<<"maximum number is "<<max;
}