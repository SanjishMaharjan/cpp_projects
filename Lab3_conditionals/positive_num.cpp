//Program to print positive number entered by the user.

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
   return 0;
}