#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char txt[50];
    cout<<"Enter the string :"<<endl;
    cin>>txt;
    strrev(txt); 
    cout<<"The reversed form of the string is :"<<txt<<endl;
    return 0;
}