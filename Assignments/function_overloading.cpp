#include<iostream>
using namespace std;
void add(int a,int b)
{
    int sum;
    sum=a+b;
    cout<<"sum of two integers :"<<sum<<endl;
}

void add(float a,int b,float c)
{
    float sum;
    sum=a+b;
    cout<<"sum of float,int,float :"<<sum<<endl;
}

void add(double a,double b)
{
    float sum;
    sum=a+b;
    cout<<"sum of double and double:"<<sum<<endl;
} 


int main()
{
add(3,5);
add(3.5,6,9.5);
add(9.8,9.5);
return 0;
}