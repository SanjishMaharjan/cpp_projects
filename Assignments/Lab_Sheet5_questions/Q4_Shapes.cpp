// Create a base class called shape.

// - Use this class to store two double type values that could be used to compute the area of figures.

// - Derive two specific classes called triangle and rectangle
//   from the base shape.
// - Add to the base class, a member function get_data() to initialize base
//   class data members and another member function display_area() to compute and display the
//   area of figures.
// - Make display_area() as virtual function and redefine this function in the
//   derived class to suit their requirements.
#include <iostream>
using namespace std;
class Shape
{
protected:
    double height, base;

public:
    void getdata()
    {
        cout << "Enter the base and height " << endl;
        cin >> this->height >> this->base;
    }
    void virtual display_area() = 0;
};
class Triangle : public Shape
{
public:
    void display_area()
    {
        cout << "Area of Triangle is " << (this->height * this->base) / 2 << endl;
    }
};
class Rectangle : public Shape
{
public:
    void display_area()
    {

        cout << "Area of Rectangle is " << this->height * this->base << endl;
    }
};

int main()
{
    Triangle t1;
    Rectangle r1;
    cout << "Triangle:" << endl;
    t1.getdata();
    cout << "Rectangle:" << endl;
    r1.getdata();
    t1.display_area();
    r1.display_area();

    return 0;
}