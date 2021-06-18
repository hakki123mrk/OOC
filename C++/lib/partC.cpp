/*part-c*/
#include<iostream>
#include<string>
#include "partB.cpp"

int main() {
    Student1 s1;
    s1.createStudent("hello", "heyyy");
    cout << s1.getName() << "  "  << s1.getUSN() << endl;
}