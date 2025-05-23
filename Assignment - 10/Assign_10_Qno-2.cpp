#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;
    long vid;

public:
    Student(string n, int r, long v) {
        name = n;
        roll = r;
        vid = v;
    }

    virtual void getFees() = 0;
    virtual void display() = 0;
};

class UG : public Student {
private:
    string course;
    int fees;

public:
    UG(string n, int r, long v, string c, int f) : Student(n, r, v) {
        course = c;
        fees = f;
    }

    void getFees() {
        cout << "UG Fees: " << fees << endl;
    }

    void display() {
        cout << "UG Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "VID: " << vid << endl;
        cout << "Course: " << course << endl;
    }
};

class PG : public Student {
private:
    string course;
    int fees;

public:
    PG(string n, int r, long v, string c, int f) : Student(n, r, v) {
        course = c;
        fees = f;
    }

    void getFees() {
        cout << "PG Fees: " << fees << endl;
    }

    void display() {
        cout << "\nPG Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "VID: " << vid << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    UG u("Abhi", 10, 39893939339, "B.Tech", 70000);
    u.display();
    u.getFees();

    PG p("Aman", 20, 39893939339, "M.Tech", 25000);
    p.display();
    p.getFees();

    return 0;
}
