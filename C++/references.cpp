#include<iostream>

using namespace std;
int main() {
    string a = "Pasta";
    string &b = a;
    
    cout << "Value of a: " << a << endl;
    cout << "Address of a :" <<  &a << endl;
    cout << "Address of b: " << &b << endl;
    cout << " Value of b: " << b << endl;
    
    a = "Pizza";
    cout << "Value of a after a is changed :" << b << endl;
}



