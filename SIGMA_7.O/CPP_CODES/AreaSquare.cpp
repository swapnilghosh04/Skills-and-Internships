#include<iostream>
using namespace std;

int main() {
    float side;
    cout << "Enter side of a square: ";
    cin >> side;

    float area = side * side;
    cout << "Area of the square: " << area << endl;
    
    return 0;
}