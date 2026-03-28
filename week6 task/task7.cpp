#include<iostream>
#include<string>
using namespace std;
int main()
{
   string productsname[4]={"apple", "banana", "orange", "mango"};   
   int prices[4]={10, 5, 8, 12};
   int quantity[4]={50,100,30,20};
   cout<<"enter the number of products you want to buy ";
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
  { string name;
   cout<<"enter the name of the product ";
   cin>>name;
   float price;
   cout<<"enter the price of the product ";
   cin>>price;
   cout<<"enter the quantity of the products ";
   int q;
   cin>>q;
   cout<<"Product Inventory Report "<<endl;
   cout<<"----------------------------"<<endl;
   float total=price*q;
   cout<<name<<": "<<price<<", "<<q<<" in stock,"<<"Total value: "<<total<<endl;
}
}
