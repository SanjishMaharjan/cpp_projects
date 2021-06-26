//WAP to add private data of two different classes.

#include<iostream>
using namespace std;
class num1
{
    friend class sum; // Declaring the friend class so that it can access the private data

    private :
      double n1;

    public :
        void setdata(double a)    
        {
            n1=a;
        }
        

};

class num2{  
   
    friend class sum;   // Declaring the friend class so that it can access the private data

   private :
     double n2;
   
   public :
       void setdata(double b)    
        {
            n2=b;
        }
   
};

class sum{   // It is a class that we have declared as friend so it has access over our data
    
    private :
        double sum;
    
    public :
    void calcsum(num1 s1, num2 s2){  
        sum=s1.n1+s2.n2;
        cout<<"The sum is : "<<sum<<endl;
    }
    
};

int main()
{
    num1 x;   // Creating object of num1
    x.setdata(45);  
    num2 y;  // Creating object of num2
    y.setdata(55);  
    sum sfinal;  // Creating object of sum
    sfinal.calcsum(x, y); // Calling method calcsum
    
return 0;
}