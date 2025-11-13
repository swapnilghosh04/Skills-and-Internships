#include <iostream>
using namespace std;

int main() {
    int v, w, tw, fw;

    cout << "Enter total number of vehicles: ";
    cin >> v;
    cout << "Enter total number of wheels: ";
    cin >> w;

    if((w % 2 != 0) || (v >= w) || (w < 2)) {
        cout << "INVALID INPUT..." << endl << "Please give proper inputs...";
        return 0;
    }

    tw = ((4 * v) - w) / 2;
    fw = v - tw;
    cout << "Two wheelers: " << tw << endl << "Four wheelers: " << fw;
    
    return 0;
}