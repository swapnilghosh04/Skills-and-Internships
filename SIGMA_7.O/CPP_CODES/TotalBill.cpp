#include<iostream>
using namespace std;

int main() {
    float pencil, pen, eraser;
    cout << "Enter cost of pencil: ";
    cin >> pencil;

    cout << "Enter cost of pen: ";
    cin >> pen;

    cout << "Enter cost of eraser: ";
    cin >> eraser;

    float totalCost = pencil + pen + eraser;
    double totalCost_GST = totalCost + (0.18 * totalCost);

    cout << "Total bill: " << totalCost_GST << endl;

    return 0;
}