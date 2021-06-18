#include<iostream>

using namespace std;

int main() {
    int x = 10;
    cout << x << endl;

    int &iref = x;
    iref = 20;
    cout << x << endl;
    iref++;
    cout << iref << endl;
}