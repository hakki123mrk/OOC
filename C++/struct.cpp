#include<iostream>

using namespace std;

struct student {
    string name;
    string usn;
    string address;
};

int main() {
    struct student stu1;
    stu1.name = "hello";
    stu1.usn = "12234";
    stu1.address = "out of this world";
    
    cout << "Name of student 1: " << stu1.name <<endl;
    cout << "USN of student 1: " << stu1.usn << endl;
    cout << "Address of student 1: " << stu1.address << endl;
}

