//Swaping values of two variables by passing reference method

#include<iostream>
using namespace std;
void swap(int &a,int &b);   //Decalring the function
int main()
{
    int num1 , num2 ;
    cout<<"Enter the first number :"<< endl;//Taking input from user
    cin>> num1;
    cout<<"Enter the second number :"<< endl;
    cin>> num2;
    cout<<"Numbers before swaping is :\n"<<  "num1:"<< num1 <<"\tnum2 :" << num2 <<endl;
    swap(num1,num2);    //Calling the function to swap the value of given numbers
    cout<<"Numbers after swaping is :\n"<< "num1 :" <<num1 <<"\tnum2 :" << num2 <<endl;
    return 0;
}
void swap(int &a,int &b)// passing the reference variable as argument
{
    int temp;
    temp=a ;    //storing value of the numbers is a temp variable to perform swaping
    a=b ;
    b=temp ;
}