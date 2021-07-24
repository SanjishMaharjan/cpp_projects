#include<iostream>
using namespace std;

void function_first(int a)
{
cout<<"The value of a before altering :"<<a<<endl;
a=5;
cout<<"The value of a after altering :"<<a<<endl;
}

void functionReference(int &b)
{
 b=35 ;
cout <<"The value of b as ampercent is :"<<b<<endl ;
}

int main()
{
int a=1 ;
int b=2 ;
function_first(a);
functionReference(b);
cout<<"The value of a in int main is :"<<a <<endl;
cout<<"The value of b in int main is :"<<b <<endl;
return 0;
}