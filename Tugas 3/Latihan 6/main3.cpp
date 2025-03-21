#include <iostream>
using namespace std;

int main() {
    int hari1, bulan1, tahun1, hari2, bulan2, tahun2;

    cout << "Masukkan tanggal pertama (hari bulan tahun): ";
    cin >> hari1 >> bulan1 >> tahun1;
    cout << "Masukkan tanggal kedua (hari bulan tahun): ";
    cin >> hari2 >> bulan2 >> tahun2;

    int totalHari1 = tahun1 * 365 + bulan1 * 30 + hari1;
    int totalHari2 = tahun2 * 365 + bulan2 * 30 + hari2;

    int selisihHari = abs(totalHari2 - totalHari1);

    int tahun = selisihHari / 365;
    selisihHari %= 365;
    int bulan = selisihHari / 30;
    int hari = selisihHari % 30;

    cout << "Selisih: " << tahun << " tahun, " << bulan << " bulan, " << hari << " hari" << endl;

    return 0;
}
