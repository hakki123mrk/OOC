#include<iostream>

using namespace std;

class Student {
    string name, usn;

    public:
    Student(string, string);
    ~Student();
};

Student :: Student(string n, string u) {
    name = n;
    usn = u;
}

Student :: ~Student() {
    cout << "The following student details is deleted:" << name << endl;
}

int main() {
    Student s1("hello", "123a");
}