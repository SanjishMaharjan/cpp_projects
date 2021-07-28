// Write a program to generate Fibonacci series using operator overloading of ++ operator a) for pre increment
#include <iostream>
using namespace std;
class Fibonacci
{
    int a = 0, b = 1, c = 0;

public:
    void show()
    {
        cout << c << " ";
    }
    void operator++()
    {
        a = b;
        b = c;
        c = a + b;
    }
};

int main()
{
    int n, i;
    Fibonacci f1;

    cout << "Please Enter the limit of the series: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        f1.show();
        ++f1;
    }

    return 0;
}