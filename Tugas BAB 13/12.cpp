#include <iostream>
#include <vector>
using namespace std;

double PolinomHorner(const vector<double>& p, int n, double x) {
    double pk = 1.0;
    double jumlah = p[0];
    for (int j = 1; j <= n; j++) {
        pk *= x;
        jumlah += p[j] * pk;
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
    double hasil = PolinomHorner(koefisien, n, x);
    cout << "Hasil dari p(" << x << ") = " << hasil << endl;
    return 0;
}
