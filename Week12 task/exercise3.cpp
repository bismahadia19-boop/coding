#include<iostream>
using namespace std;
int main()
{
  int y=10;
  int &ref=y;
  cout<<"Original value of y: "<<y<<endl;
  ref=30;
  cout<<"Modified value of y: "<<y;
}