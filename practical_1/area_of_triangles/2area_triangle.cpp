//Program to calculate the area of triangle=sqrt(s(s-a)(s-b)(s-c)).
                       //2nd part

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float length_1,length_2,length_3,semi_perimeter,area;
    cout<<"Enter the 1st side of triangle :"<<endl;
    cin>>length_1;
    cout<<"Enter the 2nd side of triangle :"<<endl;
    cin>>length_2;
    cout<<"Enter the 3rd side of triangle :"<<endl;
    cin>>length_3;
        semi_perimeter=(length_1+length_2+length_3)/2;
    cout<<"The semi perimeter of the triangle is : "<<semi_perimeter<<endl;
        area=sqrt( semi_perimeter*( semi_perimeter-length_1)*( semi_perimeter-length_2)*( semi_perimeter-length_3));
    cout<<"The area of the triangle is : "<<area;
return (0);
 
}