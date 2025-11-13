#include<iostream>
using namespace std;

int main() {
    int a = 0, b = 1, i, temp, num;

    cout << "Enter the number: ";
    cin >> num;

    cout << a << " " << b << " ";

    for(i = 2; i < num; i++) {
        temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
    }
    cout << endl;
    
    return 0;
}