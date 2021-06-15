//WAP to define a class in C++ as shown : 
//class name - Student attributes - name, roll, address, percentage methods - input(), display()
#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int roll;
    string address;
    double percentage;
void input(){
    cout<<"Enter your name : "<<endl;
    cin>>name;
    cout<<"Enter your roll no : "<<endl;
    cin>>roll;
    cout<<"Enter your address : "<<endl;
    cin>>address;
    cout<<"Enter your percentage : "<<endl;
    cin>>percentage;
}
void display(){
    cout<<" Your name is : "<<name<<endl;
    cout<<" Your Roll no is : "<<roll<<endl;
    cout<<" Your address is : "<<address<<endl;
    if (percentage < 32)
    {
        cout<<"Sorry to say you failed!!!! "<<endl;
        cout<<" Your percentage is : "<<percentage<<"%"<<endl;
    }
    else
       { cout<<" Your percentage is : "<<percentage<<"%"<<endl;
        cout<<"Congratulation you passed!!!! "<<endl;
       }
}

};
int main()
{
 Student s1;   
 s1.input();
 s1.display();
return 0;
}