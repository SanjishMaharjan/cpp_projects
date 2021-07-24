 //Function with argumment and with return type

#include <iostream>
#include<math.h>
using namespace std;
int area_of_triangle(float num_1,float num_2,float num_3);

int main()
{
    float side_1,side_2,side_3,area;
    cout<<"Enter the 1st side of triangle :"<<endl;
    cin>>side_1;
    cout<<"Enter the 2nd side of triangle :"<<endl;
    cin>>side_2;
    cout<<"Enter the 3rd side of triangle :"<<endl;
    cin>>side_3;
    area_of_triangle(side_1,side_2,side_3);
    cout<<"The area of the triangle is : "<<area;
    return 0;
}

int area_of_triangle(float num_1,float num_2,float num_3)
{       
        float semi_perimeter,area;
        semi_perimeter=(num_1+num_2+num_3)/2;
        cout<<"The semi perimeter of the triangle is : "<<semi_perimeter<<endl;
        area=sqrt( semi_perimeter*( semi_perimeter-num_1)*( semi_perimeter-num_2)*( semi_perimeter-num_3));
        return area;

}