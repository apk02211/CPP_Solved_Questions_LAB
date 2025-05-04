#include <iostream>
#include <string>
using namespace std;

class MyString {
    string str;

public:
    MyString(string s) {
        str = s;
    }

    MyString operator+(MyString& other) {
        return MyString(str + other.str);
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Abhishek ");
    MyString s2("Kumar");

    MyString s3 = s1 + s2;

    s3.display();

    return 0;
}

