#include <iostream>
using namespace std;

class AddAmount {
    int amount;

public:
    AddAmount() {
        amount = 50;
    }

    AddAmount(int add) {
        amount = 50 + add;
    }

    void displayAmount() {
        cout << "Final amount: " << amount << endl;
    }
};

int main() {
    AddAmount obj1;
    obj1.displayAmount();

    AddAmount obj2(30);
    obj2.displayAmount();

    return 0;
}

