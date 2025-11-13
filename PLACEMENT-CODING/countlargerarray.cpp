#include<iostream>
using namespace std;

int main() {
    int n, max, count = 1;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; i++){
        cout << "array[" << i << "] = ";
        cin >> arr[i];
    }

    max = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            count++;
            max = arr[i];
        }
    }

    cout << "Count: " << count << endl;
    return 0;
}