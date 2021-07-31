#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a and b: " << endl;
    cin >> a >> b;
    int x = (a - b);
    try
    {
        if (x != 0)
        {
            cout << "output is " << a / (a - b) << endl;
        }
        else
        {
            throw(x);
        }
    }
    catch (int x)
    {

        cout << "Division by 0 is not allowed!!! " << endl;
    }
    cout << "Next statement" << endl;
    return 0;
}