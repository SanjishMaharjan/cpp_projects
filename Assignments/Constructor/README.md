# Constructor Overloading
Constructors can be overloaded in a similar way as function overloading.

In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments. This concept is known as Constructor Overloading and is quite similar to function overloading. ... A constructor is called depending upon the number and type of arguments passed.

Overloaded constructors have the same name (name of the class) but the different number of arguments. Depending upon the number and type of arguments passed, the corresponding constructor is called.

# Example
## //Program to understand constructor overloading

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

## The Output seems like :
Product of two integers = 2,5
10
Product of integer and double = 4,5.886
23.544
Product of three integers = 7,9,7
441