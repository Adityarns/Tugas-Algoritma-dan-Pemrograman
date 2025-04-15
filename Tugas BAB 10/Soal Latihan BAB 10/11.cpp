#include <iostream>
#include <string>
using namespace std;

string hariList[7] = {
    "senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"
};
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
int IndeksHari(string hari) {
    for (int i = 0; i < 7; i++) {
        if (hari == hariList[i]) return i;
    }
    return -1;
}
bool TambahDetik(int &hh, int &mm, int &ss, int &dd, int &bulan, int &tahun, string &hari) {
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
                int hariMax = HariDalamBulan(bulan, tahun);
                if (dd > hariMax) {
                    dd = 1;
                    bulan++;
                    if (bulan > 12) {
                        bulan = 1;
                        tahun++;
                    }
                }
               
                int idx = (IndeksHari(hari) + 1) % 7;
                hari = hariList[idx];

                return true; 
            }
        }
    }
    return false; 
}
int main() {
    int hh, mm, ss;
    int dd, bulan, tahun;
    string hari;
    cout << "Masukkan waktu (hh mm ss): ";
    cin >> hh >> mm >> ss;
    cout << "Masukkan tanggal (dd mm yyyy): ";
    cin >> dd >> bulan >> tahun;
    cout << "Masukkan nama hari: ";
    cin >> hari;
    cout << "\nSimulasi dimulai...\n";
    int detikCount = 0;
    while (true) {
        bool hariBerganti = TambahDetik(hh, mm, ss, dd, bulan, tahun, hari);
        detikCount++;
        if (hariBerganti) break;
    }
    cout << "\nSetelah " << detikCount << " detik, hari berganti!\n";
    cout << "Tanggal: " << dd << "-" << bulan << "-" << tahun << endl;
    cout << "Hari: " << hari << endl;
    return 0;
}
