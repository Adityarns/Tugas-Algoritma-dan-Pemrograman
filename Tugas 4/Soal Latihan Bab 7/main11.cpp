#include <iostream>
using namespace std;

int hitungDurasiHari(int hari1, int hari2) {
    return (hari2 - hari1 + 7) % 7;
}

int main() {
    int hari1, hari2;
    cout << "Masukkan hari pertama (0 = Minggu, 1 = Senin, ..., 6 = Sabtu): ";
    cin >> hari1;
    cout << "Masukkan hari kedua (0 = Minggu, 1 = Senin, ..., 6 = Sabtu): ";
    cin >> hari2;

    cout << "Durasi antara kedua hari: " << hitungDurasiHari(hari1, hari2) << " hari" << endl;
    return 0;
}
