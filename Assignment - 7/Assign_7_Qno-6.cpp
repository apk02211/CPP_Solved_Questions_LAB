/* Overload Binary Operator */

#include <iostream>
using namespace std;

class Myclass {
public:
    int x;

    Myclass(int i) {
        x = i;
    }

    void operator+(Myclass m) {
        int x1 = x + m.x;
        cout << "The result of Overloading is = " << x1 << endl;
    }
};

int main() {
    Myclass a1(5);
    Myclass a2(6);
    a1 + a2;

    const int num = 5;

    cout << num << endl;
    return 0;
}
