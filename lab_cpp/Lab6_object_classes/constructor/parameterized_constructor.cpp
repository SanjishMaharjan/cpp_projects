#include<iostream>
using namespace std;

class point{
    private :                    // We have set the value to private
    int x,y;

    public :
    point(int x1, int y1){      //Parameterized  constructor having same name as class
        x=x1;                   //Accessing the private value
        y=y1;
    }
    int getx(){                //Method to return the value of x
        return x;
    }

    int gety(){                //Method to return the value of y
        return y;
    }
};
int main()
{
    point p1(167,78);        // As we are making object we don't need to call the class by . operator as it is constructor
    //p1.x;                  // The throws error as x is a private data which is not accessible outside of class
    cout<<"x:" <<p1.getx() <<endl;  
    cout<<"y:" <<p1.gety() <<endl;

return 0;
}