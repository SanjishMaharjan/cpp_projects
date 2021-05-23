#include<iostream>
using namespace std;
int main()
{
    int a,b,result;
    cout<<"Enter the value of a and b"<<endl; //taking input from user
    cin>>a >> b;

    result= a & b; //Binary AND operator
    cout<<"Value of a & b is "<< result <<endl;

    result= a | b; // Binary OR operator
    cout<<"Value of a | b is "<< result <<endl;

    result= a ^ b; // Binary XOR operator
    cout<<"Value of a ^ b is "<< result <<endl;

    result= ~a; // Binary One's Complement operator
    cout<<"Value of ~a  is "<< result <<endl;

    result= a<<6; // Binary Shift Lefto perator
    cout<<"Value of a<<6 is "<< result <<endl;

    result= a>>6; // Binary Shift Right operator
    cout<<"Value of  a>>6 is "<< result <<endl;



return 0;
}