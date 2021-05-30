//Program to build a simple calculator using switch Statement

#include<iostream>
using namespace std;
int main()
{   
    char a;
    int num1, num2;
    cout<<"Select the operation you want to perform"<<endl<<"+ - * / "<<endl;
    cin>>a;

    cout<<"Enter the two numbers:"<<endl;
    cin>>num1 >>num2;

    switch (a)
    {
    case '+':
        cout<< num1 <<"+"<< num2 <<" = "<< num1+num2 << endl;
        break;
    case '-':
        cout<< num1 <<"-"<< num2 << " = "<< num1-num2 << endl;
        break; 
    case '*':
        cout<< num1 <<"*"<< num2 << " = "<< num1*num2 << endl;
        break;
    case '/':
        cout<< num1 <<"/"<< num2 << "=" << num1/num2 << endl;
        break;
    default:
        cout<<"Please Select a valid operator!!!!" << endl;
        break;
    }
    return 0;
}