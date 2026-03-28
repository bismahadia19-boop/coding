#include<iostream>
using namespace std;
main()
{
    char word[100];
    cout<<"enter a word ";
    cin>>word;
    for(int i=0;word[i]!='\0';i++)
    cout<<word[i]<<" found on location "<<i<<endl;
}