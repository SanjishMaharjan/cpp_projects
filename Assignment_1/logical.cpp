#include<iostream>
using namespace std;
int main()
{
    int a,b;
    bool result;
    cout<<"Enter the two numbers :"<<endl;
    cin>>a >>b;
    result = (a != b) && (a < b);     // logical AND operator //true only if both statements are true else false
    cout << "(a != b) && (a < b) is " << result << endl;

    result = (a == b) && (a > b);    
    cout << "(a == b) && (a > b) is " << result << endl;

    result = (a != b) || (a < b);    // // logical OR operator //true if atleast one of the statements are true else false
    cout << "(a != b) || (a < b) is " << result << endl;

    result = (a == b) || (a > b);    
    cout << "(a == b) || (a > b) is " << result << endl;

    result = !(a == b);    // logical NOT  // true only if the operand is false
    cout << "!(a == b) is " << result << endl;

    return 0;


}