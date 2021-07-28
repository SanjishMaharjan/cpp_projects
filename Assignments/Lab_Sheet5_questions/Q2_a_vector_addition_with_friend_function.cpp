//  Write a program to implement vector addition using operator overloading
//    a) using friend function

#include <iostream>
using namespace std;
class addition
{
    int fcomp, scomp;

public:
    addition()
    {
        fcomp = 0;
        scomp = 0;
    }
    friend addition operator+(addition &v1, addition &v2);
    void getvector()
    {
        cout << "Enter the first component: " << endl;
        cin >> fcomp;
        cout << "Enter the Second component: " << endl;
        cin >> scomp;
        cout << "Vector you entered is: " << fcomp << "," << scomp << endl;
    }
    void display()
    {
        cout << "Resultant is : " << fcomp << " ," << scomp << endl;
    }
};
addition operator+(addition &v1, addition &v2)
{
    addition temp;
    temp.fcomp = v1.fcomp + v2.fcomp;
    temp.scomp = v1.scomp + v2.scomp;
    return temp;
}
int main()
{
    addition vector1, vector2, sum;
    vector1.getvector();
    vector2.getvector();
    sum = vector1 + vector2;
    sum.display();
    return 0;
}