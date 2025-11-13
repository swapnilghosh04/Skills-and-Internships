#include<iostream>
#define PI 3.14
using namespace std;

int main() {
    float radius;
    cout << "Enter radius of a circle: ";
    cin >> radius;

    cout << "Area of the circle: " << PI * radius * radius << endl;
    return 0;
}