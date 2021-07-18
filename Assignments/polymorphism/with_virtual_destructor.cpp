#include <iostream>
using namespace std;
class animal
{
public:
    virtual void move()
    {
        cout << "I can move" << endl;
    }
    animal()
    {
        cout << "Constructor of animal " << endl;
    }
    virtual ~animal() // Here we have used virtual destructor
    {
        cout << "Destructor of animal " << endl;
    }
};
class dog : public animal
{
public:
    dog()
    {
        cout << "Constructor of dog class" << endl;
    }
    ~dog()
    {
        cout << "Destructor of dog class" << endl;
    }
};
int main()
{
    animal *a1;   // declaring pointer variable to call object
    a1 = new dog; // Dynamically allocating memory for dog class using new key word
    a1->move();
    delete a1; //Releasing memory that was allocated by a1
    /*
    Destructor of both base class and derived class is invoked upon exit 
    as we have used virtual destructor
    */

    /*
    output 
    Constructor of animal
    Constructor of dog class
    I can move
    Destructor of dog class
    Destructor of animal
   */
    return 0;
}