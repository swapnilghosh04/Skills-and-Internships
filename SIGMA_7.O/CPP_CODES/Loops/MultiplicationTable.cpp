#include<iostream>
using namespace std;

int main() {
    int num, range, i;

    cout <<"Enter a number: ";
    cin >> num;

    cout << "Enter the range: ";
    cin >> range;

    for(i = 0; i <= range; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}