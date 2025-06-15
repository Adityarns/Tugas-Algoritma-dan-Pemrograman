#include <iostream>
#include <vector>
using namespace std;

double Pangkat(double x, int m) {
    double hasil = 1.0;
    for (int i = 1; i <= m; i++) {
        hasil *= x;
    }
    return hasil;
}

double Polinom(const vector<double>& p, int n, double x) {
    double jumlah = 0.0;
    for (int i = 0; i <= n; i++) {
        jumlah += p[i] * Pangkat(x, i);
    }
    return jumlah;
}

int main() {
    int n;
    double x;
    cout << "Masukkan derajat maksimum polinomial: ";
    cin >> n;
    vector<double> koefisien(n + 1);
    cout << "Masukkan " << n + 1 << " koefisien polinomial (dari p0 ke p" << n << "):" << endl;
    for (int i = 0; i <= n; i++) {
        cout << "p[" << i << "] = ";
        cin >> koefisien[i];
    }
    cout << "Masukkan nilai x yang ingin dihitung: ";
    cin >> x;
    double hasil = Polinom(koefisien, n, x);
    cout << "Hasil dari p(" << x << ") = " << hasil << endl;
    return 0;
}
