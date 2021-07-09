#include <iostream>
using namespace std;
class Cars
{

public:
    Cars()
    {
        cout << "Constructor of Cars " << endl;
    }
    ~Cars()
    {
        cout << "Destructor of Cars " << endl;
    }
};
class Sports_Cars : protected Cars // Sports_Cars is the child class of parent class car
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
class Super_Cars : private Sports_Cars // Super_Cars is the child class of Sports_Cars
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
int main()
{
    Super_Cars BMW; // Construtor is called automatically by the compiler
    // Destructor is called upon exit

    /*output seems as
    Constructor of Cars
    Constructor of Sports_Cars
    Constructor of Super_Cars
    Destructor of Super_Cars
    Destructor of Sports_Cars
    Destructor of Cars
    */
    //So from output we can verify the constructor is
    //called from starting top and destructor is called starting from bottom
    return 0;
}