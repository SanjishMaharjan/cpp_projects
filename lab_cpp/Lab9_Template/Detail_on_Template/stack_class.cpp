#include <iostream>
using namespace std;

//data structure =stack
const int MAX = 20;
template <class T>
class Stack
{
private:
    T arr[MAX];
    int top;

public:
    Stack() // Here the initial value of top of stack is set to -1 so when we add the stack up, our base will be 0
    {
        top = -1;
    }
    void push(float data)
    {
        arr[++top] = data;
    }
    T pop()
    {
        return arr[top--];
    }
    float size()
    {
        return (top + 1);
    }
};
int main()
{
    cout << "Stack for float data type is: " << endl;
    Stack<float> s1;
    cout << "Size of Stack: " << s1.size() << endl;
    s1.push(23.90);
    s1.push(54.70);
    s1.push(234.67);
    cout << "Size of Stack after pushing 3 numbers: " << s1.size() << endl;
    cout << "Number poppped: " << s1.pop() << endl;
    cout << "Number poppped: " << s1.pop() << endl;
    cout << "Size of Stack after popping : " << s1.size() << endl;
    s1.push(45.7);
    cout << "Size of Stack after pushing : " << s1.size() << endl;
    cout << "Number poppped: " << s1.pop() << endl;
    cout << "Size of Stack after popping: " << s1.size() << endl;
    return 0;
}
/*
OUTPUT
Stack for float data type is:
Size of Stack: 0
Size of Stack after pushing 3 numbers: 3
Number poppped: 234.67
Number poppped: 54.7
Size of Stack after popping : 1
Size of Stack after pushing : 2
Number poppped: 45.7
Size of Stack after popping: 1
*/