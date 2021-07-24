//Illustration of overloading of template
#include <iostream>
using namespace std;
template <class T>  // first template
void func(T a, T b) // Here both arguments are of same datatype
{
    cout << "func(T a,T b)--> \t" << a << " " << b << endl;
}
template <class T1, class T2> // second template
void func(T1 a, T2 b)         // Here arguments are of different datatypes
{
    cout << "func(T1 a,T2 b)--> \t" << a << " " << b << endl;
}
int main()
{
    func(12, 23);             // first Template function is called
    func(45, 46.6);           // Second Template function is called
    func("we", "live");       // first Template function is called
    func("Mt Everest", 8849); // Second Template function is called

    return 0;
}
/*
func(T a,T b)-->        12 23
func(T1 a,T2 b)-->      45 46.6
func(T a,T b)-->        we live
func(T1 a,T2 b)-->      Mt Everest 8849
*/