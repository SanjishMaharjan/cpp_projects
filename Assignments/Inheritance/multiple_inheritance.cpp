#include <iostream>
using namespace std;
class Sports_Cars // It is the 1st parent Class
{

public:
    Sports_Cars()
    {
        cout << "Constructor of Sports_Cars " << endl;
    }
    ~Sports_Cars()
    {
        cout << "Destructor of Sports_Cars " << endl;
    }
};
class Super_Cars // It is the 2nd parent Class
{
public:
    Super_Cars()
    {
        cout << "Constructor of Super_Cars " << endl;
    }
    ~Super_Cars()
    {
        cout << "Destructor of Super_Cars " << endl;
    }
};
class BMW : protected Sports_Cars, protected Super_Cars
//Here BMW is derived  class of both 1st and 2nd class. synatx:
//class Derived : access_specifier 1st parent class,access_specifier 2nd parent class
{
public:
    BMW()
    {
        cout << "Constructor of BMW " << endl;
    }
    ~BMW()
    {
        cout << "Destructor of BMW " << endl;
    }
};
int main()
{
    BMW BMW_model234;
    return 0;
}