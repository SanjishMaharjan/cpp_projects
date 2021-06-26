//WAP to add private data of two different classes.

#include<iostream>
using namespace std;
class input
{
    friend class display; // Declaring the friend class so that it can access the private data

    private :
      double num1,num2,sum;

    public :
        input(double a,double b)    // A constructor to assign the values 
        {
            num1=a;
            num2=b;
        }
        void calcsum(){         //Method to calculate sum
                sum=num1+num2;
        }

};
// It is a class that we have declared as friend so it has access over our data
class display{   
   
   public :
    void setdata(input i){   // Here we have object i of class input
        cout<<"Your number are  "<<i.num1 <<"\n"<<i.num2<<endl;
        cout<<"The sum is :"<< i.sum<<endl;
    }
};

int main()
{
    input num(45,7);  // Giving input through constructor
    num.calcsum();   // Calling method calcsum
    display sum;     // Creating an object "sum" of display class
    sum.setdata(num);

return 0;
}