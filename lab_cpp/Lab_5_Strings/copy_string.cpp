#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char source[50],destination[50];
    cout<<"Enter the string to be copied :"<<endl;
    cin>>source;
    cout<<"Enter the string to be dissapeared after being copied :"<<endl;
    cin>>destination;
    strcpy(destination,source);
    cout<<"The string before being copied is :"<<source<<endl;
    cout<<"The string is copied as :"<<destination<<endl;
    return 0;
}