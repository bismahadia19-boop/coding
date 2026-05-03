#include<iostream>
using namespace std;
int swapped(int a,int b);
int main()
{
    int a=10;
    int b=20;
    int *p=&a;
    int *q=&b;
    swapped(p,q);
    cout<<*p<<*q;
}
int swapped(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
    return 0;
}