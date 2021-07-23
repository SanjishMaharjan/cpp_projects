#include <iostream>
using namespace std;

int main()
{
    int i;
    float f = 9.99f;
    i = f;
    cout << "value of float is " << f << endl;
    cout << "value of converted integer is " << i << endl;

    i = static_cast<int>(f); //Type casting to change the data type
    cout << "value of integer is " << i << endl;
    return 0;
    //OUTPUT
    // value of float is 9.99
    // value of converted integer is 9
    // value of integer is 9
}