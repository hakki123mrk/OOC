#include<iostream>
#include<string>

using namespace std;

int main() {
    string arr[3];
    
    int arrsize = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i < arrsize; i++) {
        cout << "Enter the " << i+1 << " string :" << endl;
        cin >> arr[i];
    }
    
    cout << "Entered strings are :" << endl;
    for(int i = 0; i < arrsize; i++) {
        cout << arr[i] << endl;
    }
}


