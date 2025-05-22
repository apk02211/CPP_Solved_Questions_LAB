#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getData() {
         cout << "Enter your name: ";
         cin >> name;
         cout << "Enter your age: ";
         cin >> age;
    };
    void display() {
         cout << "Name: " << name << endl;
         cout << "Age: " << age << endl;
    }; 
};


class Employee : public Person {
public:
    float salary;
    string address;

    void getData() {
        Person::getData();
        cout << "Enter your salary: ";
        cin >> salary;
        cout << "Enter your address: ";
        cin >> address;
    }

    void display() {
        Person::display();
        cout << "Salary: " << salary << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    Employee obj;
    obj.getData();
    obj.display();
    return 0;
}
