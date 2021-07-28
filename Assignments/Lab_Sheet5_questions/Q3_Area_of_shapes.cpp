// Write a program finding area of square, rectangle, triangle. Use function overloading
//    technique.
#include <iostream>
#include <math.h>
using namespace std;
class Square
{
    float l;

public:
    Square(float l)
    {
        this->l = l;
    }
    float calc_area(float l)
    {
        return l * l;
    }
    void display()
    {
        cout << "Area of square " << calc_area(l) << endl;
    }
};
class rectangle
{
    float l, b;

public:
    rectangle(float l, float b)
    {
        this->l = l;
        this->b = b;
    }
    float calc_area(float l, float b)
    {
        return l * b;
    }
    void display()
    {
        cout << "Area of rectangle " << calc_area(l, b) << endl;
    }
};
class Triangle
{
    float a, b, c;

public:
    Triangle(float a, float b, float c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    float calc_area(float a, float b, float c)
    {
        float s;
        s = (a + b + c) / 2;
        return (sqrt(s * (s - a) * (s - b) * (s - c)));
    }
    void display()
    {
        cout << "Area of Triangle " << calc_area(a, b, c) << endl;
    }
};
int main()
{
    Square s1(5);
    rectangle r1(8, 9);
    Triangle t1(2, 3, 4);
    s1.display();
    r1.display();
    t1.display();
    return 0;
}