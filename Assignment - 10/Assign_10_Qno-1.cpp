/* Write a program using the concept of inheritance, constructors and over-riding to find
a) Base Class-Area of a rectangular room
b) Child Class- Volume of a rectangular room.*/

#include <iostream>
using namespace std;

class Area {
public:
    int length, breadth;

    Area(int l, int b) {
        length = l;
        breadth = b;
    }

    virtual void display() = 0;
};

class Volume:public Area {
public:
    int height;

    Volume(int l, int b, int h):Area(l, b) {
        height = h;
    }

    void display() {
        int area = length * breadth;
        cout << "Area of the rectangular room: " << area << endl;

        int volume = length * breadth * height;
        cout << "Volume of the rectangular room: " << volume << endl;
    }
};

int main() {
    Volume v(10, 20, 5);
    v.display();

    return 0;
}
