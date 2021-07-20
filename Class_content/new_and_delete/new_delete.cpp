//Program to understand the use of new and delete
#include <iostream>
using namespace std;

int main()
{
    int *pointInt;
    float *pointfloat;
    pointInt = new int; //To dynamically alocate the memory to pointint which store address in pointer
    pointfloat = new float;
    cout << "Address assigned to the pointInt is: " << pointInt << endl;
    cout << "Address assigned to the pointfloat is: " << pointfloat << endl;
    *pointInt = 45;
    *pointfloat = 45.454f;
    cout << "Value assigned to the pointInt is: " << *pointInt << endl;
    cout << "Value assigned to the pointfloat is: " << *pointfloat << endl;
    delete pointInt; // To release the memory allocated pointer variable
    delete pointfloat;
    return 0;
}