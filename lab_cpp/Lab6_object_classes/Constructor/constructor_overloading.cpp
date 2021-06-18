//Program to understand constructor overloading

#include<iostream>
using namespace std;

class multiply
    {
    private :
     float product;
    public :
     multiply(int num1 ,int num2) //Constructor 1
     {
         product=num1*num2;
         cout<<"Product of two integers = "<<num1 <<"," <<num2 <<endl <<product<<endl;
         
     }
     multiply(int num1 ,double num2) //Constructor 2 having same name as constructor 1 but different arguments
     {
         product=num1*num2;
         cout<<"Product of integer and double = "<<num1 <<"," <<num2 <<endl <<product<<endl;
     }
     multiply(int num1 ,int num2, int num3) //Constructor 3
     {
         product=num1*num2*num3;
         cout<<"Product of three integers = "<<num1 <<"," <<num2 <<"," <<num3 <<endl <<product<<endl;
     }

    };
int main()
{
    multiply m1(2,5);       //It calls constructor 1
    multiply m2(4,5.886);     //It calls constructor 2
    multiply m3(7,9,7);     //It calls constructor 3

  
return 0;
}