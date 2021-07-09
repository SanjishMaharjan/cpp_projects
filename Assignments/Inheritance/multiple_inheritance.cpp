#include <iostream>
using namespace std;
class Sports_Cars
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
class Super_Cars
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