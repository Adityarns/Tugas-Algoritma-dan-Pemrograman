#include <iostream>
using namespace std;

int main() {
    int nomorBulan, tahun, jumlahHari;
    cout << "Masukkan nomor bulan dan tahun: ";
    cin >> nomorBulan >> tahun;

    switch (nomorBulan) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        jumlahHari = 31;
        break;
    case 4: case 6: case 9: case 11:
        jumlahHari = 30;
        break;
    case 2:
        if (tahun % 4 == 0 && (tahun % 100 != 0 || tahun % 400 == 0)) {
            jumlahHari = 29;
        } else {
            jumlahHari = 28;
        }
        break;
    default:
        cout << "Nomor bulan tidak valid!" << endl;
        return 1;
    }

    cout << "Jumlah hari: " << jumlahHari << endl;
    return 0;
}