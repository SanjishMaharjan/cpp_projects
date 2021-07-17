#include <iostream>
using namespace std;
class city
{
public:
    void display()
    {
        cout << "The cities of Nepal" << endl;
    }
};
class Temple_city : virtual public city // Using virtual infront so we can
{
public:
    void displayT()
    {
        cout << "The city of Temples" << endl;
    }
};
class Natural_city : virtual public city
{
public:
    void displayN()
    {
        cout << "The city of Natural Resources" << endl;
    }
};
class Both : public Temple_city, public Natural_city
{
public:
    void displayB()
    {
        cout << "The city of Temples and Natural Resources" << endl;
    }
};

int main()
{
    // city c1;
    Temple_city kathmandu;
    Natural_city pokhara;
    Both Mustang;
    kathmandu.displayT();
    pokhara.displayN();
    Mustang.display();
    /* If we don't use virtual keyword along with parent class then the ambiguous is 
    shown as there are two processes comming from the grand parent to parent and then to 
    child class*/
    return 0;
}