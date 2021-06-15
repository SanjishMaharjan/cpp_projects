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
 Employee e[4];
 for(int  i = 0; i < 5; i++)
 {
   e[i].details();
   e[i].display();
 } 
 


return 0;
}