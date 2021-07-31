#include <iostream>
#include <math.h>
using namespace std;
class Number
{
private:
    double num;

public:
    class NEG //A class to call its objects
    {
    };
    void readnum()
    {
        cout << "Enter the Number: ";
        cin >> num;
    }
    double sqroot()
    {
        if (num < 0)
        {
            throw NEG(); // To remove the exception we throw a dummy object
        }
        else
        {
            return (sqrt(num));
        }
    }
};
int main()
{
    Number n1;
    double res;
    n1.readnum();
    try
    {
        cout << "Try to find square root..." << endl;
        res = n1.sqroot();
        cout << "Square root is " << res << endl;
        cout << "Sucess...exception is not raised" << endl;
    }
    catch (Number ::NEG)
    {
        cout << "Square root of negative number is not allowed" << endl;
    }

    return 0;
}