/* Q. A program in C++ to read the record of a student (name, address, roll) and
 display them using structure*/

 #include<iostream>
 using namespace std;
 
struct student
{
    char name[50];
    char address[50];
    int roll;
    float marks;
};

 int main()
 {
    student s;
    cout<< "Enter student's Details" <<endl;
    cout<< "Enter name of the student "<<endl;
    cin>> s.name;
    cout<< "Enter address of the student "<<endl;
    cin>> s.address;
    cout<< "Enter roll no of the student "<<endl;
    cin>> s.roll;
    cout<< "Enter marks of the student "<<endl;
    cin>> s.marks;

    cout<< " The details of the student is "<<endl;
    cout<<"Name "<<s.name<<endl;
    cout<<"Roll number "<<s.roll<<endl;
    cout<<"Address "<< s.address<< endl;
    cout<<"Marks "<<s.marks<<endl;

return 0;
 }