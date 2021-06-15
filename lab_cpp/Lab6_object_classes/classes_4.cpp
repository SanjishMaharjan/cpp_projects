//WAP to define a class named employee with it's data members ID, Name and Salary. Read records of five employees and display the record in tabular form
// [Hint- to make the data display in tabular form, use "/t"(escape sequence) for line spaces]
#include<iostream>
using namespace std;


class Employee
{
   
    public :
        int ID;
        string name;
        double Salary= 25000;
        void details(){
            cout<<"Enter your ID "<<endl;
            cin>>ID;
            cout<<"Enter your name "<<endl;
            cin>>name;
        }
        void display(){
            cout<<"ID\t "<<ID<<endl;
            cout<<"Name\t "<<name<<endl;
            cout<<"Salary\t "<<Salary<<endl;
        }

};

int main()
{
 Employee e1,e2,e3,e4,e5;
    e1.details();
    e1.display();
    e2.details();
    e2.display();
    e3.details();
    e3.display();
    e4.details();
    e4.display();
    e5.details();
    e5.display();


return 0;
}