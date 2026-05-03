#include<iostream>
using namespace std;
int main()
{
    int ar[5]={1,2,3,4,5};
    int *ptr=ar;
    for(int i=0;i<=5;i++)
    {
        cout<<"Element "<<i<<": "<<*(ptr+i)<<endl;
    }
}