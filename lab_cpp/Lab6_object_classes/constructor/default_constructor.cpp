#include<iostream>
using namespace std;

class construct
{
public:
int a,b;
    construct() //Default constructor //It has same name as the class
    {
        a=10;
        b=90;
    }

};
int main()
{
//Default constructor is called automatically when object is created
 construct c;
 cout<<"a: " <<c.a <<endl; //printing the value  
 cout<<"b: " <<c.b <<endl;   

return 0;
}