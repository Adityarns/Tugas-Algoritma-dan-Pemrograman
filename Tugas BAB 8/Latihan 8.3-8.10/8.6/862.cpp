#include <iostream>

using namespace std;

int main() {
    int x;
    double S = 0.0; 
    cout << "Masukkan nilai x: ";
    cin >> x; 

    do {
        S += 1.0 / x; 
        cout << "Masukkan nilai x: ";
        cin >> x; 
    }while (x != -1);

    cout << S << endl; 

    return 0;
}
