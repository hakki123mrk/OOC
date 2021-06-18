#include<iostream>
#include<string>

using namespace std;

class A {
    int x;

    public:
    void setX(int);
    int getX();
};

class Student {
    string name, usn;

    public:
    void createStudent(string, string);
    string getName();
    string getUSN();
};

void Student :: createStudent(string n, string u) {
    name = n;
    usn = u;
}

string Student :: getName() {
    return name;
}

string Student :: getUSN() {
    return usn;
}

int A :: getX() {
    return x;
}

void A :: setX(int p) {
    x = p;
}
int main() {
    Student s1;
    A y;
    s1.createStudent("hello", "4SF20CS405");
    cout << s1.getName() << "  "  << s1.getUSN() << endl;
    y.setX(25);
    cout << y.getX() << endl;
}