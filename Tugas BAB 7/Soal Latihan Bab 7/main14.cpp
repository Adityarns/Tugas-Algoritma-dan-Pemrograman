#include <iostream>
#include <iomanip> // Untuk manipulasi output
using namespace std;

double hitungHargaTiket(int tahunLahir, int tahunBerangkat, double hargaNormal) {
    int umur = tahunBerangkat - tahunLahir;
    if (umur < 12) return hargaNormal * 0.75;  
    return hargaNormal;
}

int main() {
    int tahunLahir, tahunBerangkat;
    double hargaNormal = 1000000;  

    cout << "Masukkan tahun lahir penumpang: ";
    cin >> tahunLahir;
    cout << "Masukkan tahun keberangkatan: ";
    cin >> tahunBerangkat;

    // Validasi input
    if (tahunLahir > tahunBerangkat) {
        cout << "Error: Tahun keberangkatan tidak boleh lebih kecil dari tahun lahir." << endl;
        return 1;
    }

    double hargaTiket = hitungHargaTiket(tahunLahir, tahunBerangkat, hargaNormal);

    // Format output dengan 2 digit desimal dan pemisah ribuan
    cout << fixed << setprecision(2);
    cout << "Harga tiket yang harus dibayar: Rp " << hargaTiket << endl;

    return 0;
}