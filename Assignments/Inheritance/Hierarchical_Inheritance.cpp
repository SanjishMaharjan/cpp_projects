#include <iostream>
using namespace std;
class Cars
{
public:
    Cars()
    {
        cout << "Constructor of Cars" << endl;
    }
    ~Cars()
    {
        cout << "Destructor of Cars" << endl;
    }
};
class SuperCars : public Cars
{
public:
    SuperCars()
    {
        cout << "Constructor of SuperCars" << endl;
    }
    ~SuperCars()
    {
        cout << "Destructor of SuperCars" << endl;
    }
};
class ElectricCars : public Cars
{
public:
    ElectricCars()
    {
        cout << "Constructor of ElectricCars" << endl;
    }
    ~ElectricCars()
    {
        cout << "Destructor of ElectricrCars" << endl;
    }
};
int main()
{
    SuperCars BMW;
    ElectricCars Tesla;
    return 0;
}