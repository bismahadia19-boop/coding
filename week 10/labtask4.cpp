#include<iostream>
#include<cmath>
using namespace std;
int height(int dsitance ,int angle);
int main()
{
    float distance,angle;
    cout<<"enter the distance from the tree ";
    cin>>distance;
    cout<<"enter the angle of elevation(in degrees)";
    cin>>angle;
    height(distance,angle);
}
int height(int distance,int angle)
{
    float one_radian=57.2958;
    float radian=angle/one_radian;
    float height=distance*tan(radian);
    cout<<" height of th tree is "<<height;
}