#include <iostream>
using namespace std;

void CetakWaktu(int hh, int mm, int ss) {
    if (hh < 10) cout << "0";
    cout << hh << ":";
    if (mm < 10) cout << "0";
    cout << mm << ":";
    if (ss < 10) cout << "0";
    cout << ss << endl;
}

void KurangiWaktuKasus(int hh, int mm, int ss, int p) {
    mm -= p;
    while (mm < 0) {
        mm += 60;
        hh--;
        if (hh < 0) hh = 23;
    }
    cout << "Waktu setelah dikurangi " << p << " menit: ";
    CetakWaktu(hh, mm, ss);
}

int main() {
    int hh, mm, ss, p;
    cout << "Masukkan waktu (hh mm ss): ";
    cin >> hh >> mm >> ss;
    cout << "Kurangi berapa menit? ";
    cin >> p;
    cout << "\n--- Menggunakan Analisis Kasus ---\n";
    KurangiWaktuKasus(hh, mm, ss, p);
    return 0;
}
