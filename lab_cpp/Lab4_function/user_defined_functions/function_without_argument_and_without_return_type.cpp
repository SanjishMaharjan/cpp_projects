//Function with no argumment and no return type

#include <iostream>
#include<math.h>
using namespace std;
void area_of_triangle();

int main()
{
    area_of_triangle();
    return 0;
}

void area_of_triangle()
{
    float num_1,num_2,num_3,semi_perimeter,area;
    cout<<"Enter the 1st side of triangle :"<<endl;
    cin>>num_1;
    cout<<"Enter the 2nd side of triangle :"<<endl;
    cin>>num_2;
    cout<<"Enter the 3rd side of triangle :"<<endl;
    cin>>num_3;
        semi_perimeter=(num_1+num_2+num_3)/2;
    cout<<"The semi perimeter of the triangle is : "<<semi_perimeter<<endl;
        area=sqrt( semi_perimeter*( semi_perimeter-num_1)*( semi_perimeter-num_2)*( semi_perimeter-num_3));
    cout<<"The area of the triangle is : "<<area;

}