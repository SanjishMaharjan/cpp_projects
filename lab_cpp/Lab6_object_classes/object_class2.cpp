#include <iostream>
using namespace std;

class Room {

    private:
    double length;
    double breadth;
    double height;
    public:

    double SetArea(double len, double bth , double hgt)
    {
    length = len;
    breadth = bth;
    height = hgt;
    }
    
    double calculateArea()
    {
        return length*breadth;
    }

    double calculateVolume()
    {
        return length*breadth*height;
    }
};

int main(){
    Room room1;

    room1.SetArea(45.5, 49.5 ,23.7);
    cout<<"The area of the room is :"<<room1.calculateArea()<<endl;
    cout<<"The volume of the room is :"<<room1.calculateVolume()<<endl;
    
    return 0;
}