#include <iostream>
using namespace std;

class animal
{
public:
    virtual void move() = 0; // pure virtual function
    animal()
    {
        cout << "I am constructor of animal " << endl;
    }
    void move_again()
    {
        cout << "animals uses different method to move around" << endl;
    }
};
class dog : public animal
{
public:
    void move()
    {
        cout << "dog walks";
    }
};
int main()
{
    /* animal b; "animal::move" is a pure virtual function so
    object of abstract class type "animal" is not allowed*/

    animal *b; //so we use pointers to declare object
    dog d;
    b->move_again();
    d.move_again();
    d.move();
}