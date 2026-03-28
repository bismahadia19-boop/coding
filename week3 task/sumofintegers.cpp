#include<iostream>
using namespace std;
main()
{
int integers,sum=0;
cout<<"enter all 5 integers you want to add : "<<endl;
cin>>integers;
int digit1=integers%10;
integers=integers/10;
int digit2=integers%10;
integers=integers/10;
int digit3=integers%10;
integers=integers/10;
int digit4=integers%10;
integers=integers/10;
int digit5=integers%10;
integers=integers/10;
sum=digit1+digit2+digit3+digit4+digit5;
cout<<"sum of integers is "<< sum;
}