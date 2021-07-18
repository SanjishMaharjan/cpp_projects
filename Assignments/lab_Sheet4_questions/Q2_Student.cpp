#include <iostream>
using namespace std;
class Student
{
protected:
    string name;
    int roll;

public:
    void getdata()
    {
        cout << "Enter your name: " << endl;
        getline(cin, name);
        cout << "Enter your roll no: " << endl;
        cin >> roll;
    }
    void display()
    {
        cout << "Your name is: " << name << endl;
        cout << "Your roll no is: " << roll << endl;
    }
};
class Test : virtual public Student //Here virtual class is defined to remove ambuiguity
{
protected:
    float Marks_maths, Marks_Eng;

public:
    void getmarks()
    {
        cout << "Enter your marks in Mathematics: " << endl;
        cin >> Marks_maths;
        cout << "Enter your marks in English: " << endl;
        cin >> Marks_Eng;
    }
    void display_marks()
    {
        cout << "Your Marks in Mathematics is: " << Marks_maths << endl;
        cout << "Your roll in English is: " << Marks_Eng << endl;
    }
};
class Sports : virtual public Student //Here virtual class is defined to remove ambuiguity
{
protected:
    double Score;

public:
    void getscore()
    {
        cout << "Enter your score: " << endl;
        cin >> Score;
    }
    void display_score()
    {
        cout << "Your score is: " << Score << endl;
    }
};
class Result : public Test, public Sports
{
protected:
    float total;

public:
    void display_total()
    {
        total = Marks_maths + Marks_Eng + Score;
        cout << "Your total score is : " << total << endl;
    }
};

int main()
{

    Result std1;
    std1.getdata();
    std1.getmarks();
    std1.getscore();
    cout << "Your Detalils are:" << endl;
    std1.display();
    std1.display_marks();
    std1.display_score();
    std1.display_total();
    return 0;
}