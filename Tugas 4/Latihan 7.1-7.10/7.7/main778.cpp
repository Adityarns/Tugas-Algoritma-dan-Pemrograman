#include <iostream>
using namespace std;

struct Tanggal {
    int dd, mm, yy;
};

bool isTahunKabisat(int tahun) {
    return (tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0);
}

Tanggal hitungTanggalBerikutnya(Tanggal t) {
    int hariDalamBulan;

    switch (t.mm) {
        case 4: case 6: case 9: case 11: 
            hariDalamBulan = 30;
            break;
        case 1: case 3: case 5: case 7: case 8: case 10: 
            hariDalamBulan = 31;
            break;
        case 2: 
            if (isTahunKabisat(t.yy))
                hariDalamBulan = 29;
            else
                hariDalamBulan = 28;
            break;
        case 12: 
            if (t.dd == 31) {
                t.dd = 1;
                t.mm = 1;
                t.yy += 1;
                return t;
            } else {
                t.dd += 1;
                return t;
            }
        default:
            cout << "Bulan tidak valid!" << endl;
            return t;
    }

    if (t.dd < hariDalamBulan) {
        t.dd += 1;
    } else {
        t.dd = 1;
        t.mm += 1;
    }

    return t;
}

int main() {
    Tanggal t;

    cout << "Masukkan tanggal (dd mm yyyy): ";
    cin >> t.dd >> t.mm >> t.yy;

    Tanggal tBesok = hitungTanggalBerikutnya(t);

    cout << "Tanggal berikutnya: " << tBesok.dd << "/" << tBesok.mm << "/" << tBesok.yy << endl;

    return 0;
}
