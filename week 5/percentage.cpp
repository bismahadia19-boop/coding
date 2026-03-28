#include<iostream>
using namespace std;
main()
{
    int n=0,num;
    cout<<"enter numbers ";
    cin>>n;
    int p1=0, p2=0,p3=0,p4=0,p5=0;
    for (int i=1;i<=n;i++)
    {
    cout<<"enter number ";
    cin>>num;
    if(p1>=1&&p1<200)
    p1=p1+1;
    else if(p2>=200&&p2<=399)
    p2=p2+1;
    else if (p3>=400&&p3<599)
    p3=p3+1;
    else if(num>=600&&num<800)
    p4=p4+1;
    else 
    p5=p5+1;
}
float per1=(p1*100.0)/n;
float per2=(p2*100.0)/n;
float per3=(p3*100.0)/n;
float per4=(p4*100.0)/n;
float per5=(p5*100.0)/n;
cout<<per1<<" %"<<endl;
cout<<per2<<" %"<<endl;
cout<<per3<<" %"<<endl;
cout<<per4<<" %"<<endl;
cout<<per5<<" %"<<endl;
}