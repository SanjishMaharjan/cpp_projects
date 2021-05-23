#include<iostream>
using namespace std;
int main()
{
    int a,b,difference;
    a=2;  // using assignment operator to assign the value of a
    b=4;  // using assignment operator to assign the value of b
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    a-=b;  //performing substraction then assigning value to the same operator
    cout<<"after differnce\n"<<"a= "<<a<<endl;
    
    return 0;
}