//Program to check whether an integer is positive or negative.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number :"<<endl;
    cin>>num;
    
    if(num > 0)
    {
        cout<<"The number you entered is positive"<<endl;
    }
    else
    {
         cout<<"The number you entered is negative"<<endl;
    }
    return 0;
    
}