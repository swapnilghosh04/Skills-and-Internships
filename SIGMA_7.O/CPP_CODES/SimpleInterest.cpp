#include<iostream>
using namespace std;

int main() {
    float principal, rate, year;

    cout <<"Enter principal: ";
    cin >> principal;

    cout <<"Enter rate: ";
    cin >> rate;

    cout <<"Enter number of year(s): ";
    cin >> year;

    float SI = (principal * rate * year) / 100;

    cout << "The simple interest: " << SI << endl;
    return 0;
}