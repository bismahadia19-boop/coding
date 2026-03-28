#include<iostream>
using namespace std;
main()
{
int numbers,sum=0,subtract,multiply=1;
cout<<"enter all 15 numbers : "<<endl;
cin>>numbers;
sum=sum+numbers;
cin>>numbers;
sum=sum+numbers;
cin>>numbers;
sum=sum+numbers;
cin>>numbers;
sum=sum+numbers;
cin>>numbers;
sum=sum+numbers;
cin>>numbers;
multiply=multiply*numbers;
cin>>numbers;
multiply=multiply*numbers;
cin>>numbers;
multiply=multiply*numbers;
cin>>numbers;
multiply=multiply*numbers;
cin>>numbers;
multiply=multiply*numbers;
cin>>numbers;
subtract=numbers;
cin>>numbers;
subtract=subtract-numbers;
cin>>numbers;
subtract=subtract-numbers;
cin>>numbers;
subtract=subtract-numbers;
cin>>numbers;
subtract=subtract-numbers;
int result=(multiply+sum)-subtract;
cout<<"final result "<< result;
}