/* Q. Write a program to read the record of 3 students(name, address and roll) and
 display the record using structure in C++*/


 #include<iostream>
 using namespace std;
 
struct student
{
    char name[50];
    int roll;
    float marks;
}s[3];

 int main()
 {

    cout<< "Enter student's Details" <<endl;

    for(int i=0 ;i < 3 ;i++)

    {
    cout<< "Enter name of the student "<<endl;
    cin>> s[i].name;
    cout<< "Enter roll no of the student "<<endl;
    cin>> s[i].roll;
    cout<< "Enter marks of the student "<<endl;
    cin>> s[i].marks;
    }

    cout<< " The details of the student is "<<endl;

    for(int i=0 ;i < 3 ;i++)
    {
    cout<<"Name "<<s[i].name<<endl;
    cout<<"Roll number "<<s[i].roll<<endl;
    cout<<"Marks "<<s[i].marks<<endl;
    }

return 0;
 }