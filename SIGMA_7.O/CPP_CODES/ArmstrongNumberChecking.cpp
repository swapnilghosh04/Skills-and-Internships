#include<iostream>
using namespace std;
#include<cmath>

int main() {
    int num, rem, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;

    while(temp != 0) {
        rem = temp % 10;
        sum = sum + pow(rem, 3);
        temp = temp / 10;
    }

    if(sum == num) {
        cout << "It is an Armstrong Number." << endl;
    } else {
        cout << "It is not an Armstrong Number." << endl;
    }

    return 0;
}