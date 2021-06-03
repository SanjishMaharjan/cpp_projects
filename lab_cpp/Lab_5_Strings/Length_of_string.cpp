#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int len;
    char txt[50];
    cout<<"Enter the string to find the length :"<<endl;
    cin>>txt;
    len=strlen(txt); 
    cout<<"The length of the string is :"<<len<<endl;
    return 0;
}