#include<iostream>
using namespace std;

int main() {
    int num = 2, i, range;

    cout << "Enter the range: ";
    cin >> range;

    for(i = 2; i <= num; i++) {
        if(num % i != 0)
            cout << num << ", ";
        num++
    }
    return 0;
}