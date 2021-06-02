//C++ program to find if an integer is even or odd or neither

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number :"<<endl;
    cin>>num;
    
    if(num != 0)
    {
        if(num % 2 == 0)
        {
            cout<<"The number you entered is even"<<endl;
        }
        else
        {
         cout<<"The number you entered is odd"<<endl;
        }
    }
    else {
        cout<<"The number you entered is zero"<<endl;
    }
    return 0;
    
}