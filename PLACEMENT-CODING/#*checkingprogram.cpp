#include<iostream>
using namespace std;

int main() {
    string str;
    int count1, count2;
    bool isValid = true;
    count1 = count2 = 0;

    cout << "Enter a string: ";
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        if((str.at(i) != '#') && (str.at(i) != '*')) {
            isValid = false;
            break;
        }
    }

    if(isValid == false) {
        cout << "Invalid Input..." << endl << "Please check your input and try again..." << endl;
        return 0;
    }


    for(int i = 0; i < str.length(); i++) {
        if(str.at(i) == '#') {
            count1++;
        }
        if(str.at(i) == '*') {
            count2++;
        }
    }

    if(count2 > count1)
        cout << "Positive Integer - the number of *s are greater than that of #s." << endl;
    else if(count2 == count1)
        cout << "0 - valid string as the number of #s and *s are equal." << endl;
    else
        cout << "Negative Integer - the number of #s are greatre than that of *s." << endl;

    return 0;
}
