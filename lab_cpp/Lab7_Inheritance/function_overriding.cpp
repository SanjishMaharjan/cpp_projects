#include <iostream>
using namespace std;
class base
{
public:
    void print() // A simple function to print message
    {
        cout << "Print function of base class." << endl;
    }
};
class derived : public base
{
public:
    void print() // A simple function to print message having same name
    {
        cout << "Print function of derived class." << endl;
    }
};
int main()
{
    derived obj1;

    obj1.print();       //print function of derived class is only printed as it prioritizes derived class
    obj1.base::print(); /*print function of base class is printed as function
                         is override using scope resolution operator(::) */
    return 0;
}