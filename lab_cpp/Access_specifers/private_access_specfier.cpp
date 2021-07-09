#include <iostream>
using namespace std;
//Class definition
class circle
{
private:
    double radius;

public:
    void setdata(double radius1)
    {
        radius = radius1;
    }
    double compute_area()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    circle obj;
    obj.setdata(9.9);
    cout << "Area is " << obj.compute_area() << endl;

    return 0;
}