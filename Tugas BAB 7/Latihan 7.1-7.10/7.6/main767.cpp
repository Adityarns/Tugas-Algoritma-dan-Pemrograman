#include <iostream>

using namespace std;

int main() {
    int NomorBulan, tahun, JumlahHari;

    cout << "Bulan (1-12)? "; 
    cin >> NomorBulan;
    cout << "Tahun? "; 
    cin >> tahun;

    switch (NomorBulan) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            JumlahHari = 31;
            break;
        case 4: case 6: case 9: case 11:
            JumlahHari = 30;
            break;
        case 2:
            if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)){
                // Tahun kabisat
                JumlahHari = 29;
            } else {
                // Bukan tahun kabisat
                JumlahHari = 28;
            }
            break;
        default:
            cout << "Nomor bulan tidak valid!" << endl;
            return 1;
    }

    cout << "Jumlah hari dalam bulan " << NomorBulan 
         << " tahun " << tahun 
         << " adalah " << JumlahHari << " hari." << endl;

    return 0;
}
