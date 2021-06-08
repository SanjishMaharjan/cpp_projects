//Swapping values of two variables by passing reference method

#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main()
{
    int num1 , num2 ;
    cout<<"Enter the first number :"<< endl;
    cin>> num1;
    cout<<"Enter the second number :"<< endl;
    cin>> num2;
    cout<<"Numbers before swaping is :\n"<<  "num1:"<< num1 <<"\tnum2 :" << num2 <<endl;
    swap(num1,num2);
    cout<<"Numbers after swaping is :\n"<< "num1 :" <<num1 <<"\tnum2 :" << num2 <<endl;
    return 0;
}
void swap(int &a,int &b)
{
    int temp;
    temp=a ;
    a=b ;
    b=temp ;
}