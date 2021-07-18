#include <iostream>
#include <string.h>
using namespace std;
class Staff
{
protected:
    int code;
    string name;

public:
    void getdata_staff()
    {
        cout << "Enter your code: " << endl;
        cin >> this->code;

        cout << "Enter your name: " << endl;
        cin >> this->name;
    }
};
class Teacher : public Staff
{
protected:
    string subject, publication;

public:
    void getdata_teacher()
    {
        cout << "Enter the subject of Teacher: " << endl;
        cin >> this->subject;
        cout << "Enter the publication of book of Teacher: " << endl;
        cin >> this->publication;
    }
    void display_teacher()
    {
        cout << "Code number for Teacher is: " << this->code << endl;
        cout << "Name of Teacher:" << this->name << endl;
        cout << this->name << " teaches " << this->subject << endl;
        cout << this->name << " uses " << this->publication << endl;
    }
};
class Officer : public Staff
{
protected:
    string grade;

public:
    void getdata_officer()
    {
        cout << "Enter the grade of Officer: " << endl;
        cin >> this->grade;
    }
    void display_officer()
    {
        cout << "Code number for Officer is: " << this->code << endl;
        cout << "Name of Officer:" << this->name << endl;
        cout << "Grade of " << this->name << " is " << this->grade << endl;
    }
};
class Typist : public Staff
{
protected:
    float speed;

public:
    void getdata_typist()
    {
        cout << "Enter the typing speed of Typist: " << endl;
        cin >> this->speed;
    }
};
class Regular : public Typist
{
protected:
    float wages;

public:
    void getdata_regular()
    {
        cout << "Enter the wages of typist: " << endl;
        cin >> this->wages;
    }
    void display_Regular()
    {
        cout << "Code number for Typist is: " << this->code << endl;
        cout << "Name of Regular Typist:" << this->name << endl;
        cout << "Daily wages of " << this->name << " is " << this->wages << endl;
    }
};
class Casual : public Typist
{
protected:
    float wages;

public:
    void getdata_casual()
    {
        cout << "Enter the wages of typist: " << endl;
        cin >> this->wages;
    }
    void display_casual()
    {
        cout << "Code number for Typist is: " << this->code << endl;
        cout << "Name of Regular Typist:" << this->name << endl;
        cout << "Daily wages of " << this->name << " is " << this->wages << endl;
    }
};

int main()
{

    Teacher t;
    Officer o;
    Typist ty;
    Regular r;
    Casual c;
    char d;
    int choice;

    do
    {
        cout << "For creation of database, please enter the information as asked." << endl;
        cout << "Choose code for entering:" << endl;
        cout << "Teacher"
             << "\t"
             << "1" << endl;
        cout << "Officer"
             << "\t"
             << "2" << endl;
        cout << "Typist"
             << "\t"
             << "3" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            t.getdata_staff();
            t.getdata_teacher();
            break;
        case 2:
            o.getdata_staff();
            o.getdata_officer();
            break;
        case 3:
        {
            char a;
            cout << "Regular or casual typist?"
                 << "\n Enter R for regular and C for casual:" << endl;
            cin >> a;
            if (a == 'R' || a == 'r')
            {
                r.getdata_staff();
                r.getdata_typist();
                r.getdata_regular();
            }
            else if (a == 'C' || a == 'c')
            {
                c.getdata_staff();
                c.getdata_typist();
                c.getdata_casual();
            }
            else
            {
                cout << "Invalid input" << endl;
            }
            break;
        }
        default:
            cout << "Invalid input" << endl;
            break;
        }
        cout << "Do you want to continue(Y/N):" << endl;
        cin >> d;
    } while (d == 'Y' || d == 'y');

    do
    {

        cout << "For retrieving data from database, please enter code:" << endl;
        cout << "Teacher"
             << "\t"
             << "1" << endl;
        cout << "Officer"
             << "\t"
             << "2" << endl;
        cout << "Typist"
             << "\t"
             << "3" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            t.display_teacher();
            break;
        case 2:

            o.display_officer();
            break;
        case 3:
        {
            char a;
            cout << "Regular or casual typist?"
                 << "\n Enter R for regular and C for casual:" << endl;
            cin >> a;
            if (a == 'R' || a == 'r')
            {

                r.display_Regular();
            }
            else if (a == 'C' || a == 'c')
            {

                c.display_casual();
            }
            else
            {
                cout << "Invalid input" << endl;
            }
            break;
        }
        default:
            cout << "Invalid input" << endl;
            break;
        }

        cout << "Do you want to continue(Y/N):" << endl;
        cin >> d;

    } while (d == 'Y' || d == 'y');
    return 0;
}
