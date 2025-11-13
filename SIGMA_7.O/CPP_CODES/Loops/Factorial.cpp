#include<iostream>
using namespace std;

int main() {
    int fact = 1, num, i;

    cout << "Enter a number: ";
    cin >> num;

    if(num == 0)
        cout << num << "! = " << fact << endl;
    else {
        for(i = num; i > 0; i--) {
            fact = fact * i;
        }
        cout << num << "! = " << fact << endl;
    }

    return 0;
}