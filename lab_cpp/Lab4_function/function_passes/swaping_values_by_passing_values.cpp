//Swaping values of two variables by passing value

#include<iostream>
using namespace std;
void swap(int a,int b);   //Decalring the function
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
    return 0;   //Here the output won't swap as the value passed aren't excessed by int function
}
void swap(int a,int b)// passing the value of variable as argument
{
    int temp;
    temp=a ;    //storing value of the numbers is a temp variable to perform swaping
    a=b ;
    b=temp ;
}