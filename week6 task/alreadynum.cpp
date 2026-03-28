#include<iostream>
using namespace std;
main()
{
    int n,i,input;
    cout<<"enter number of digits you want to print ";
    cin>>n;
    int count=0;
    int num[n];
    for(int i=0;i<n;i++)
    {
    cout<<"enter numbers ";
    cin>>input;
    bool found=false;
    for(int i=0;i<count;i++)
    {
        if(num[i]==input)
        {
            found=true;
            break;
        }
    }
    if(found)
    {
        cout<<"already exist: "<<input<<endl;
    }
    else
    {
        num[count]=input;
        count++;
    }}
    cout<<"Unique numbers: ";
    for(int i=0;i<count;i++)
    {
        cout<<num[i]<<" ";
    }
}
