#include<iostream>
using namespace std;
main()
{
    int n1,n2,hcf;
    cout<<"enter first number ";
    cin>>n1;
    cout<<"enter second number ";
    cin>>n2;
    int a=n1, b=n2;
    while(hcf!=0){
        hcf=n1%n2;
    }
    hcf=a;
    int lcm=(n1*n2)/hcf;
    cout<<"hcf of "<<n1<<" and "<<n2<<" is "<<hcf<<endl;
    cout<<"lcm of "<<n1<<" and "<<n2<<" is "<<lcm;
}