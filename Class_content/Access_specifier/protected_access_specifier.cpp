#include <iostream>
using namespace std;
class parent
{
protected:
    int id_protected;
};
class child : public parent
{
public:
    void setdata(int ID)
    {
        id_protected = ID;
    }
    void displayID()
    {
        cout << "ID_protected is " << id_protected << endl;
    }
};
int main()
{
    child c1;
    c1.setdata(34);
    c1.displayID();

    return 0;
}