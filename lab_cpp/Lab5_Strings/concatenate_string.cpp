#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[50];
    cout<<"Enter your name :"<<endl;
    cin>>name;
    strcat(name," is your name. "); 
    cout<<name<<endl;
    return 0;
}