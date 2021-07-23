#include <iostream>
using namespace std;
template <class T1, class T2>
void testfun(T1 a, T2 b)
{
    cout << a << " " << b << endl;
}

int main()
{
    int inum = 90;
    float fnum = 90.45;
    testfun(inum, fnum);
    //Equivalent to testfun<int , float>(inum,fnum)
    testfun(345, "Templete are cool features of OOP!!! ");
    //Equivalent to testfun<int , string>(inum,char)

    return 0;
}