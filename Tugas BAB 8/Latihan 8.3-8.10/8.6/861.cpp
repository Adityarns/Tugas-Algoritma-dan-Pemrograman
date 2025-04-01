#include <iostream>

using namespace std;

int main() {
    int x;
    double S = 0.0; 
    cout << "Masukkan nilai x: ";
    cin >> x; 

    while (x != -1) {
        S += 1.0 / x; 
        cout << "Masukkan nilai x: ";
        cin >> x; 
    }

    cout << S << endl; 

    return 0;
}
