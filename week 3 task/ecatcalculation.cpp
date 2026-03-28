#include<iostream>
using namespace std;
main()
{
float matric_marks, inter_marks, ecat_marks,Ecat;
string name;
cout<<"YOUR NAME ";
cin>>name;
cout<<"enter your matric marks (OUT OF 1100) ";
cin>>matric_marks;
cout<<"enter your intermidiate marks (OUT OF 550) " ;
cin>>inter_marks;
cout<<"enter your ecat marks (OUT  OF 400) ";
cin>>ecat_marks;
cout<<"aggregate :"<<Ecat;
matric_marks=matric_marks/1100*10;
inter_marks=inter_marks/550*40;
ecat_marks=ecat_marks/400*50;
cout<<"your aggregate is ="<<matric_marks+inter_marks+ecat_marks+Ecat;



}