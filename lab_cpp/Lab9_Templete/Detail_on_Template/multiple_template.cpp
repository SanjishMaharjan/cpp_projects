#include <iostream>
using namespace std;

template <class T1, class T2> //Here T1 and T2 are templates of different attributes
class Test
{
private:
    T1 a;
    T2 b;

public:
    Test()
    {
        a = 0;
        b = 0;
    }
    Test(T1 n1, T2 n2)
    {
        a = n1;
        b = n2;
    }
    void display()
    {
        cout << "Data: " << a << " and " << b << endl;
    }
};
int main()
{
    Test<int, float> myobj(3, 4.5);
    myobj.display();

    return 0;
}
/*
OUTPUT:
Data: 3 and 4.5
*/