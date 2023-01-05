// Program to illustrate the working of
// objects and class in C++ Programming

#include <iostream>
using namespace std;

// create a class
class Room {

   public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

   // create object of Room class
    Room room1, room2;

    // assign values to data members
    room1.length = 34;
    room1.breadth = 28;
    room1.height = 20;

    room2.length = 42.5;
    room2.breadth = 30.8;
    room2.height = 19.2;


    // calculate and display the area and volume of the room
    cout << "Area of Room1 =  " << room1.calculateArea() << endl;
    cout << "Volume of Room1 =  " << room1.calculateVolume() << endl;


    cout << "Area of Room2 =  " << room2.calculateArea() << endl;
    cout << "Volume of Room2 =  " << room2.calculateVolume() << endl;

    return 0;
}
