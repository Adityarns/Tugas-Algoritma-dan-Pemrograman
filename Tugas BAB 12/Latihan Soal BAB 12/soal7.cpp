#include <iostream>
#include <cmath>
using namespace std;

double hitungSimpanganBaku(double X[], int n) {
    double jumlah = 0;
    for (int i = 0; i < n; i++) {
        jumlah += X[i];
    }
    double rata = jumlah / n;
    double jumlahSelisihKuadrat = 0;
    for (int i = 0; i < n; i++) {
        double selisih = X[i] - rata;
        jumlahSelisihKuadrat += selisih * selisih;
    }

    double simpanganBaku = sqrt(jumlahSelisihKuadrat / (n - 1));
    return simpanganBaku;
}

int main() {
    double data[] = {10.4, 1.3, 3.8, 5.2, 7.0};
    int n = sizeof(data) / sizeof(data[0]);

    double hasil = hitungSimpanganBaku(data, n);
    cout << "Simpangan baku dari data adalah: " << hasil << endl;

    return 0;
}
