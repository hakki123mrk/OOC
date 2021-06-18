/*part-b*/
#include<iostream>
#include<string>
#include "partA.h"

using namespace std;

void Student1 :: createStudent(string n, string u) {
    name = n;
    usn = u;
}

string Student1 :: getName() {
    return name;
}

string Student1 :: getUSN() {
    return usn;
}