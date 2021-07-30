#include <iostream>
using namespace std;

int main()
{
    float x = -1.9;
    cout << "Before try \n";
    try
    {
        cout << "Inside try \n";
        if (x < 0)
        {
            throw x;
            cout << "After throw \n";
        }
    }
    catch (int x)
    {
        cout << "Exception Caught Int type \n";
    }
    catch (float x)
    {
        cout << "Exception Caught float type \n";
    }

    cout << "after catch \n";
    return 0;
}