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
class Sports_Cars : private Cars
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
int main()
{
    Sports_Cars BMW;
    return 0;
}