#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"enter the number of flights ";
    cin>>n;
    int seats[1000],number[100];
    string destination;
    for(int i=0;i<n;i++)
    {
    cout<<"enter the number for flight "<<i+1<<" ";;
    cin>>number[i];
    cout<<"enter the destination of flight "<<number[i]<<" ";
    cin.ignore();
    getline(cin,destination);
    cout<<"enter the seats available for flight "<<i+1<<" ";
    cin>>seats[i];
    cout<<endl;
    }
    cout<<"Flight Information"<<endl;
    cout<<"---------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Flight "<<number[i]<<" to "<<destination<<" has "<<seats[i]<<" available"<<endl;
        cout<<endl;
    }
    cout<<"flight with less than 5 seats "<<endl;
    cout<<"--------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
      if(seats[i]<5)
      {
          cout<<"Flight "<<number[i]<<" to "<<destination<<" has only "<<seats[i]<<" seats available"<<endl;
      }
    }
}
