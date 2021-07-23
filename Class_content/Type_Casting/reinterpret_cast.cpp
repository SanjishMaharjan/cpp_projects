#include <iostream>
using namespace std;

int main()
{
    int i = 500; // i is a integer
    cout << "value of address of i is " << &i << endl;
    int *p; // p is a pointer variable
    //p = i;// cannot assign int in int*, integer to pointer comparison
    p = reinterpret_cast<int *>(i);
    cout << "value of p is " << p << endl;

    return 0;
}
// It basically makes the value into address
// i.e value is saved as address
// It converts the inter type into hex type