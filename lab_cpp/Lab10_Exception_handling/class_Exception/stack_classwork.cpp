#include <iostream>
using namespace std;

const int MAX = 3;
template <class T>
class Stack
{
private:
    T stack[MAX];
    int top;

public:
    class Full
    {
    };
    class Empty
    {
    };
    Stack()
    {
        top = -1;
    }
    void push(T data)
    {
        if (top != 2) //stack keeps on adding until stack is full
            stack[++top] = data;
        else
            throw Full(); // Exception is shown when the stack is completely full
    }
    T pop()
    {
        if (top == -1) // When the stack is empty this exception is thrown
            throw Empty();
        else
            return stack[top--]; // Members of stacked are popped
    }
    float size()
    {
        return (top + 1);
    }
};
int main()
{
    Stack<float> s1;
    //Here as we are using multiple class exceptions we have to use try and catch condition multiple times
    try
    {
        s1.push(23.90);
        cout << "Size of Stack: " << s1.size() << endl;
        s1.push(54.70);
        cout << "Size of Stack: " << s1.size() << endl;
        s1.push(234.67);
        cout << "Size of Stack: " << s1.size() << endl;
        s1.push(23.67);
    }
    catch (Stack<float>::Full)
    {
        cout << "Stack overflow!!!" << endl;
    }
    try
    {
        cout << "Number popped: " << s1.pop() << endl;
        cout << "Number popped: " << s1.pop() << endl;
        cout << "Number popped: " << s1.pop() << endl;
        cout << s1.pop() << endl;
    }
    catch (Stack<float>::Empty)
    {
        cout << "Stack is empty!!" << endl;
    }
    return 0;
}
/*
Output
Size of Stack: 1
Size of Stack: 2
Size of Stack: 3
Stack overflow!!!
Number popped: 234.67
Number popped: 54.7
Number popped: 23.9
Stack is empty!
*/