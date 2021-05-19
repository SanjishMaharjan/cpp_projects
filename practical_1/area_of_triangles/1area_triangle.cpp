//Program to calculate the area of triangle(1/2*base*height).
                       //1st part

#include<iostream>
using namespace std;
int main()
{
   float base, height,area;
    cout<<"Enter the base of triangle : \n";
    cin>>base;
    cout<<"Enter the height of triangle : \n";
    cin>>height;
    area=0.5*(base*height);
    cout<<"The area of triangle is : "<<area;
    return (0);
}