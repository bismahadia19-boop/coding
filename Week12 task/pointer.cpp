#include<iostream>
using namespace std;
int main()
{
  int x=10;
  int *p=&x;
  cout<<"value of x "<<x<<endl;
  cout<<"Address of value "<<&x<<endl;
  cout<<"value of x "<<*p<<endl;
}