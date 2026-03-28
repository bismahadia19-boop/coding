#include<iostream>
using namespace std;
main()
{
    int salary;
    int laptopprice=50000;
    salary=10000;
   int advance=10000*50/100;
    int aftertakingadvance=10000+(advance*6);
    int monthrequired=laptopprice/advance;
    if(laptopprice<=aftertakingadvance)
    cout<<"you can buy laptop";
    else
    cout<<"month required to buy laptop : "<< monthrequired;
}