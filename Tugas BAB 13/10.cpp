#include <iostream>
using namespace std;

double Pangkat(double x, int n) {
    double hasil = 1.0;
    for (int i = 1; i <= n; i++) {
        hasil *= x;
    }
    return hasil;
}

int main() {
    double x;
    int n;
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai n (pangkat): ";
    cin >> n;
    double hasil = Pangkat(x, n);
    cout << "Hasil dari " << x << "^" << n << " adalah: " << hasil << endl;
    return 0;
}
