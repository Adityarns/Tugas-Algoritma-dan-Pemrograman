#include <iostream>
using namespace std;

int main() {
    double totalBelanja, totalAkhir;
    cout << "Masukkan total belanja: ";
    cin >> totalBelanja;

    if (totalBelanja > 100000) {
        totalAkhir = totalBelanja * 0.9;
        cout << "Total setelah diskon: Rp " << totalAkhir << endl;
    } else {
        cout << "Tidak ada diskon. Total yang harus dibayar: Rp " << totalBelanja << endl;
    }

    return 0;
}
