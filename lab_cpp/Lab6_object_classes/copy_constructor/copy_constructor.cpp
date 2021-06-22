// The copy constructor in C++ is used to copy data of one object to another

#include<iostream>
using namespace std;
class wall{  // Declaration of class
    private:
    double length;
    double height;

    public:
    wall(double len , double hgt)   // Parameterized constructor
    {
        length=len;
        height=hgt;
    }

    wall(wall &obj){   // Copy constructor with wall as the parameter
       // Initialing private varibles
        length=obj.length;   
        height=obj.height;
    }

    double calculate_area (){ // A function inside class to calculate the area of wall
        return length*height;
    }

};

int main()
{
    wall wall1(10.5,4.5); // Create an object with wall class
    cout<<"The area of Wall 1 is : " <<wall1.calculate_area() <<endl;  //Print area of wall 1
    
    wall wall2 =wall1; // Copy the content of wall1 to another object wall 2
        /*Here wall 1 is object of student wall class whose value 
        is being copied to another object of class i.e wall 2  */
    cout<<"The area of Wall 2 is : " <<wall2.calculate_area() <<endl; //Print area of wall 2
    

return 0;
}