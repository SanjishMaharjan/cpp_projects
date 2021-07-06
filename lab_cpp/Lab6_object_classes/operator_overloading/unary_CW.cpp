#include <iostream>
using namespace std;
class unary
{
    int n;

public:
    void getdata(); // Declaring  the function inside class
    void display(); // Declaring  the function inside class

    // Using the operator keyword along with operand to using prefix adder
    unary operator++()
    {
        unary output;
        output.n = ++n;
        return output;
    }
};
void unary ::getdata() // Calling the function
{
    cout << "Enter the number : " << endl;
    cin >> n;
}
void unary ::display() // Calling the function
{
    cout << "The result after adding 1 is : " << n << endl;
}
int main()
{
    unary O1, output;
    O1.getdata();
    output = ++O1; // Calling the operator overloading function then storing it in output
    output.display();
    return 0;
}