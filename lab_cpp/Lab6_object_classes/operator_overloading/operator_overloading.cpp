#include(iostream)
using namespace std;
class unary{
int a,b,c;
public:
void getdata(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}
void operator -(){
    a=-a;
    b=-b;
    c=-c;
}
void setdata(){
    cout<<"The value of a is "<<a;
    cout<<"The value of b is "<<b;
    cout<<"The value of c is "<<c;
}
};
int main(){
    unary u1,u2;
    u1.getdata(12,3,-9);
    u1.getdata(-91,-7,0);
    cout<<"Before using unary operator"<<endl;
    u1.setdata();
    u2.setdata();
    -u1;
    -u2;
    cout<<"After using unary operator"<<endl;
    u1.setdata();
    u2.setdata();
    return 0;
}

