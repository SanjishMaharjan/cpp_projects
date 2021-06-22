// Destructor is a member function which destructs or deletes an object.

#include<iostream>
using namespace std;

class Helloworld{
    public:
    Helloworld(){ //  It is a constructor 
        cout<<"Constructor is called !!!"<<endl;
    }
    ~Helloworld(){ //  It is a destructor .A special symbol ~ is used before constructor to call destructor
        cout<<"Destuctor is called !!!"<<endl;
    }
    void display(){ // Member function to print statement
        cout<<"Hello World !!!"<<endl;
    }
};
int main()
{
    Helloworld obj; // Object of class Helloworld is created.
    obj.display();  // Member function is called.

return 0;
}