#include<iostream>

using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int arrsize = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < arrsize; i++) 
        cin >> arr[i];
    
    for(int i = 0; i < arrsize; i++)
        cout << arr[i] << endl;
    
    cout << arrsize << endl;
}






