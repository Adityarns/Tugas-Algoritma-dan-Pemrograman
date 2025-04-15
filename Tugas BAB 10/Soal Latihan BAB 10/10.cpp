#include <iostream>
using namespace std;

bool isKabisat(int tahun);
int hitungHariDalamBulan(int bulan, int tahun);
void hitungJarakTanggal(int tahun, int bulan, int hari, int &jarakHari);

int main() {
    int tahun, bulan, hari, jarakHari;
    cout << "Masukkan tanggal (dd mm yyyy): ";
    cin >> hari >> bulan >> tahun;
    hitungJarakTanggal(tahun, bulan, hari, jarakHari);
    cout << "Jarak dari 1-1-1900 adalah: " << jarakHari << " hari" << endl;
    return 0;
}
bool isKabisat(int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}
int hitungHariDalamBulan(int bulan, int tahun) {
    if (bulan == 2) {
        return isKabisat(tahun) ? 29 : 28;
    }
    if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) {
        return 30;
    }
    return 31;
}

void hitungJarakTanggal(int tahun, int bulan, int hari, int &jarakHari) {
    const int tahunAwal = 1900;
    const int bulanAwal = 1;
    const int hariAwal = 1;
    jarakHari = 0;
    for (int t = tahunAwal; t < tahun; t++) {
        jarakHari += isKabisat(t) ? 366 : 365;
    }
    for (int b = bulanAwal; b < bulan; b++) {
        jarakHari += hitungHariDalamBulan(b, tahun);
    }
    jarakHari += hari - hariAwal;
}