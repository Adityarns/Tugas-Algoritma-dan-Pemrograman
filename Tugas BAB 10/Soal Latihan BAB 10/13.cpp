#include <iostream>
#include <ctime>
using namespace std;

bool TahunKabisat(int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}
int HariDalamBulan(int bulan, int tahun) {
    switch (bulan) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
        case 4: case 6: case 9: case 11: return 30;
        case 2: return TahunKabisat(tahun) ? 29 : 28;
        default: return 0;
    }
}
void TampilDuaDigit(int angka) {
    if (angka < 10) cout << "0";
    cout << angka;
}

int main() {
    int hh = 23, mm = 59, ss = 50;
    int dd = 11, bulan = 4, tahun = 2025;

    time_t last_time = time(0);

    while (true) {
        time_t now = time(0);

        if (now != last_time) {
            last_time = now;

            TampilDuaDigit(hh); cout << ":";
            TampilDuaDigit(mm); cout << ":";
            TampilDuaDigit(ss); cout << " | ";
            TampilDuaDigit(dd); cout << "-";
            TampilDuaDigit(bulan); cout << "-";
            cout << tahun << endl;

            ss++;
            if (ss == 60) {
                ss = 0;
                mm++;
                if (mm == 60) {
                    mm = 0;
                    hh++;
                    if (hh == 24) {
                        hh = 0;
                        dd++;

                        int maxHari = HariDalamBulan(bulan, tahun);
                        if (dd > maxHari) {
                            dd = 1;
                            bulan++;
                            if (bulan > 12) {
                                bulan = 1;
                                tahun++;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
