#include<iostream>

using namespace std;

struct car {
    string make, model;
    float price;
    int seatingCapacity;
};

int main() {
    struct car car1 = { 'Toyota', 'Corolla', 20000.00, 4};
    struct car car2 = {'Hyundai', 'Creta', 19000.00, 4};
    
    cout << "Car 1 Details:" <<endl;
    cout << "Make : " << car1.make <<endl;
    cout << "Model : " << car1.model <<endl;
    cout << "Price : " << car1.price <<endl;
    cout << "Seating Capacity :" << car1.seatingCapacity <<endl;
    
    
    cout << "Car 2 Details:" <<endl;
    cout << "Make : " << car2.make <<endl;
    cout << "Model : " << car2.model <<endl;
    cout << "Price : " << car2.price <<endl;
    cout << "Seating Capacity :" << car2.seatingCapacity <<endl;

}







