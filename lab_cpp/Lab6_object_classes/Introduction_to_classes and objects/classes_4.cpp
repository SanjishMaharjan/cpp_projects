//WAP to define a class named employee with it's data members ID, Name and Salary. Read records of five employees and display the record in tabular form
// [Hint- to make the data display in tabular form, use "/t"(escape sequence) for line spaces]
#include<iostream>
using namespace std;


class Employee
{
   
    private :
        int ID;
        string name;
        double Salary= 25000;
    public :
       /* void getdetails(int ID1,string name1,double Salary1){
            ID=ID1;
            name=name1;
            Salary=Salary1;
        }*/
       void details(){
            cout<<"Enter your ID "<<endl;
            cin>>ID;
            cout<<"Enter your name "<<endl;
            cin>>name;
        }
        void display(){
            cout<<"ID "<<ID;
            cout<<" \tName "<<name;
            cout<<" \tSalary "<<Salary;
        }

};

int main()
{
 Employee e[4];
 for(int  i = 0; i < 5; i++)
 {
   cout<<"\nEnter details of employee "<<i+1<<endl; 
   e[i].details();
   e[i].display();
 } 
 


return 0;
}