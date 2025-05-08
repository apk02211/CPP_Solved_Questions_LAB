#include <iostream>
using namespace std;

class Person {
public:
    string name;
    long vid;
    string address;
    string sex;

    Person(string n, long v, string a, string s) {
        name = n;
        vid = v;
        address = a;
        sex = s;
    }
};

class Employee {
public:
    int empId;
    int salary;

    Employee(int eId, int sl) {
        empId = eId;
        salary = sl;
    }

    virtual void display() = 0;
};

class SummerStudent : public Employee {
public:
    int roll;
    int collegeId;

    SummerStudent(int r, int cId, int eId, int sl) : Employee(eId, sl) {
        roll = r;
        collegeId = cId;
    }

    void display() {
        cout << "Summer Student:\n";
        cout << "Roll: " << roll << endl;
        cout << "College ID: " << collegeId << endl;
        cout << "Emp ID: " << empId << endl;
        cout << "Salary: " << salary << endl;
    }
};

class CivilServant : public Employee {
public:
    int deptId;
    string deptName;
    string postingPlace;

    CivilServant(int dId, string dName, string place, int eId, int sl) : Employee(eId, sl) {
        deptId = dId;
        deptName = dName;
        postingPlace = place;
    }

    void display() {
        cout << "Civil Servant:\n";
        cout << "Dept ID: " << deptId << endl;
        cout << "Dept Name: " << deptName << endl;
        cout << "Posting Place: " << postingPlace << endl;
        cout << "Emp ID: " << empId << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee {
public:
    int compId;
    string compName;

    Manager(int cId, string cName, int eId, int sl) : Employee(eId, sl) {
        compId = cId;
        compName = cName;
    }

    void display() {
        cout << "Manager:" << endl;
        cout << "Company ID: " << compId << endl;
        cout << "Company Name: " << compName << endl;
        cout << "Emp ID: " << empId << endl;
        cout << "Salary: " << salary << endl;
    }
};

class PersonGautam : public CivilServant, public Person {
public:
    PersonGautam(int dId, string dName, string place, int eId, int sl, string n, long v, string a, string s)
    : CivilServant(dId, dName, place, eId, sl), Person(n, v, a, s) {}
};

int main() {
    SummerStudent ss(101, 501, 2001, 50000);
    ss.display();
    cout << "\n";

    CivilServant cs(201, "Health", "Mumbai", 2002, 45000);
    cs.display();
    cout << "\n";

    Manager m(301, "TechCorp", 2003, 75000);
    m.display();
    cout << "\n";

    PersonGautam pg(401, "Finance", "Delhi", 2004, 60000,
                   "Gautam", 9991234567, "Delhi", "Male");
    pg.display();

    return 0;
}
