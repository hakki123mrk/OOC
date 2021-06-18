#include<iostream>

using namespace std;

class Distance {
    int iFeet;
    float fInches;

    public:
    void setFeet(int x) {
        iFeet = x;
    }

    int getFeet() {
        return iFeet;
    }

    void setInches(float x) {
        fInches = x;
    }

    float getInches() {
        return fInches;
    }
};

int main() {
    Distance d1, d2;
    d1.setFeet(20);
    d1.setInches(30.5);

    d2.setFeet(21);
    d2.setInches(31.5);

    cout << d1.getFeet() << "  " << d1.getInches() << endl;
    cout << d2.getFeet() << "  " << d2.getInches() << endl;
}