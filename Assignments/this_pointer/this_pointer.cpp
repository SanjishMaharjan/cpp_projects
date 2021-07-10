#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a;
    }
    void getdata()
    {
        cout << "The value of a is " << a;
    }
};
int main()
{
    A a1;
    a1.setdata(675);
    a1.getdata();
    return 0;
}
/* this is a keyword which is a pointer which points
 to the object which invokes the member function*/