#include<iostream>
using namespace std;
void modifywithpointer(int*p)
{
*p=50;
}
void modifywithrefernce(int &r)
{
        r=100;
}
int main()
{
    int a=10,b=15;
  modifywithpointer(&a);
  modifywithrefernce(b);
  cout<<"Value of a after modification  "<<a<<endl;
  cout<<"Value of b reference modification "<<b<<endl;
}