#include <iostream>
using namespace std;

class Room {

    public:
    double length;
    double breadth;
    double height;

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

    room1.length=45.9;
    room1.breadth=90.9;
    room1.height=49.8;
    cout<<"The area of the room is :"<<room1.calculateArea()<<endl;
    cout<<"The volume of the room is :"<<room1.calculateVolume()<<endl;
    
    return 0;
}