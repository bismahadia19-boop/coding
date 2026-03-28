#include<iostream>
using namespace std;
main()
{
    string word,i;
    char alp;
    cout<<"enter the word ";
    cin>>word;
    cout<<"enter the character you want to compare ";
    cin>>alp;
    bool found=false;
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]==alp)
        {
            found=true;
            break;
        }}
        if(found)
        {
            cout<<alp<<" is present in the word ";
        }
        else
        cout<<alp<<"is not present in word ";
}