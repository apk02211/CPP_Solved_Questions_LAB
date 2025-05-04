#include <iostream>
using namespace std;

class A {
public:
    int a, b;
    A(int x, int y) {
        a = x;
        b = y;
    }
};

class B:public A {
public:
    int c, result;
    B(int x, int y, int z):A(x, y) {
       c = z;
    }
    void display() {
        result = a * b * c;
        cout << "Multiplication Result = " << result << endl;
    }
};

int main() {
    B obj(5, 6, 2);
    obj.display();

    return 0;
}
