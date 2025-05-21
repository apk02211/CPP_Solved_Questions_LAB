#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int breadth;

    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    Rectangle(int s) {
        length = s;
        breadth = s;
    }

    int area() {
        return length * breadth;
    }

    void display() {
        cout << "Area = " << area() << endl;
    }
};

int main() {
    Rectangle r1;
    r1.display();
    Rectangle r2(4);
    r2.display();
    Rectangle r3(5, 3);
    r3.display();
    
    return 0;
}
