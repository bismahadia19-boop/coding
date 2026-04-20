#include<iostream>
#include<cmath>
using namespace std;
float a ,b,c;
double root1,root2;
double determinant1;
double determinant(int a,int b,int c);
double conditions(int a,int b,int c);
int main()
{
    cout<<"enter the value of a ";
    cin>>a;
    cout<<"enter the value of b ";
    cin>>b;
    cout<<"enter the value of c ";
    cin>>c;
    determinant(a,b,c);
    conditions(a,b,c);
}
double determinant(int a,int b,int c)
{
   determinant1=b*b-4*a*c;
   return determinant1;
}
double conditions(int a,int b, int c)
{
   if (determinant1>0)
   {
     root1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
     root2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
     cout<<"complex solutions "<<root1<<" and "<<root2;
   }
   else if(determinant1==0)
   {
     root1=-b/2*a;
     root1=root2;
     cout<<"complex calculations "<<root1<<" and "<<root2;
   }
   else if(determinant1<0)
   {
    root1=-b/2*a+sqrt(-b*b-4*a*c)/(2*a);
    root2=-b/2*a-sqrt(-b*b-4*a*c)/(2*a);
    cout<<"complex calculations "<<root1<<" and "<<root2;
   }
}