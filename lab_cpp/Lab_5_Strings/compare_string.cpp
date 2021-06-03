#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char txt1[50],txt2[50];
    cout<<"Enter the 1st string :"<<endl;
    cin>>txt1;
    cout<<"Enter the 2nd string :"<<endl;
    cin>>txt2;
    int n=strcmp(txt1,txt2); 
    cout<<"The comparision of two string are :"<<n<<endl;
    return 0;
}