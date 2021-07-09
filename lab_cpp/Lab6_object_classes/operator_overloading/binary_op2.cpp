#include <iostream>
using namespace std;
class distances
{
    float inch, feet;

public:
    distances() //Default constructor initiate values as 0
    {
        inch = 0;
        feet = 0;
    }
    distances(float feet, float inch) // Taking input through this operator
    {
        this->feet = feet;
        this->inch = inch;
    }
    //operator overloading + to perform addition
    distances operator+(distances &d2) // Binary operation so a parameter is required
    {
        distances d3;
        d3.feet = feet + d2.feet;
        d3.inch = inch + d2.inch;
        return d3;
    }
    void display()
    {
        cout << "Sum is: " << endl
             << "feet: " << feet << endl
             << "inch:  " << inch << endl;
    }
};
int main()
{
    distances r1(23.2, 43.5), r2(43.5, 67.4), r3;
    r3 = r1 + r2;
    r3.display();

    return 0;
}