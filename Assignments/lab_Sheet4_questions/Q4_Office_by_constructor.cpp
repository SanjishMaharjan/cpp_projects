#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    float code;

public:
    Person()
    {
        code = 0;
        name = "###";
    }
    void getdata()
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter your code: " << endl;
        cin >> code;
    }
    void display()
    {
        cout << "Your name is: " << name << endl;
        cout << "Your code is: " << code << endl;
    }
};
class Account : public virtual Person
{
protected:
    float pay;

public:
    Account()
    {
        pay = 0;
    }
    void getdata_account()
    {
        cout << "Enter your payment: " << endl;
        cin >> pay;
    }
    void display_account()
    {
        cout << "Your payment is: " << this->pay << endl;
    }
};
class Admin : public virtual Person
{
protected:
    float experience;

public:
    Admin()
    {

        experience = 0;
    }
    void getdata_admin()
    {
        cout << "Enter you experience: " << endl;
        cin >> experience;
    }
    void display_admin()
    {
        cout << "Your experience is: " << this->experience << endl;
    }
};
class Master : public Admin, public Account
{
public:
    Master()
    {
    }
};

int main()
{
    Master m1;
    int choice;
    char c;
    do
    {
        cout << "Enter your choice: " << endl;
        cout << "press 1 for Account" << endl;
        cout << "press 2 for Admin" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            m1.getdata();
            m1.getdata_account();
            break;
        case 2:
            m1.getdata();
            m1.getdata_admin();
            break;

        default:
            cout << "Select a valid input" << endl;
            break;
        }
        cout << "Do you want to update information(Y/N):" << endl;
        cin >> c;
    } while (c == 'Y' || c == 'y');

    cout << "Displaying entered information" << endl;

    do
    {
        cout << "Enter your choice: " << endl;
        cout << "press 1 for Account" << endl;
        cout << "press 2 for Admin" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            m1.display();
            m1.display_account();
            break;
        case 2:
            m1.display();
            m1.display_admin();
            break;

        default:
            cout << "Select a valid input" << endl;
            break;
        }
        cout << "Do you want to update information(Y/N):" << endl;
        cin >> c;
    } while (c == 'Y' || c == 'y');

    return 0;
}