#include <iostream>
using namespace std;

const int Nmaks = 100; 
typedef int LarikInt[Nmaks + 1]; 

void BacaKoefisien(LarikInt a, int n) {
    for (int i = 0; i <= n; i++) {
        cout << "Koefisien x^" << i << ": ";
        cin >> a[i];
    }
}

void CetakPolinom(LarikInt a, int n) {
    cout << "\nPolinom: ";
    for (int i = n; i >= 0; i--) {
        if (a[i] != 0) {
            cout << a[i];
            if (i > 0) cout << "x^" << i << " ";
            if (i > 0 && a[i-1] > 0) cout << "+ ";
        }
    }
    cout << endl;
}

int main() {
    LarikInt koef;
    int n;
    cout << "Masukkan derajat polinom (n): ";
    cin >> n;
    if (n < 0 || n > Nmaks) {
        cout << "Derajat tidak valid.\n";
        return 1;
    }
    BacaKoefisien(koef, n);
    CetakPolinom(koef, n);
    return 0;
}
