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

void KurangiWaktuPerhitungan(int hh, int mm, int ss, int p) {
    int totalDetik = hh * 3600 + mm * 60 + ss;
    totalDetik -= p * 60;
    if (totalDetik < 0)
        totalDetik += 24 * 3600;
    int new_hh = (totalDetik / 3600) % 24;
    int new_mm = (totalDetik % 3600) / 60;
    int new_ss = totalDetik % 60;
    cout << "Waktu setelah dikurangi " << p << " menit: ";
    CetakWaktu(new_hh, new_mm, new_ss);
}

int main() {
    int hh, mm, ss, p;
    cout << "Masukkan waktu (hh mm ss): ";
    cin >> hh >> mm >> ss;
    cout << "Kurangi berapa menit? ";
    cin >> p;
    cout << "\n--- Menggunakan Perhitungan ---\n";
    KurangiWaktuPerhitungan(hh, mm, ss, p);
    return 0;
}
