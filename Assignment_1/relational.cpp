 #include<iostream>
using namespace std;
int main()
{
    int a,b,output;
    cout<<"Enter two numbers :"<<endl;
    cin>>a >>b;
 
    cout<<"Here if result is 0 means false and 1 means true "<<endl; 

    output = (a == b); //equal to operator  
    cout << "a == b is " << output << endl;

    output = (a != b);  // not equal to operator
    cout << "a != b is " << output << endl;

    output = a > b;   // greater than operator
    cout << "a > b is " << output << endl;

    output = a < b;   // less than operator
    cout << "a < b is " << output << endl;

    output = a >= b;  // greater than or equal to operator
    cout << " a >= b is " << output << endl;

    output = a <= b;  // less than or equal to operator
    cout << " a <= b is " << output << endl;

    return 0;
}