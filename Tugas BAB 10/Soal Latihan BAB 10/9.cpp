#include <iostream>
#include <cmath>
using namespace std;

struct tanggal{
    int hari;
    int bulan;
    int tahun;
};

void tanggalSebelumnya(tanggal tgl) {
    if (tgl.hari == 1) {
        if (tgl.bulan == 1) {
            tgl.hari = 31;
            tgl.bulan = 12;
            tgl.tahun--;
        } else if (tgl.bulan == 3) {
            if ((tgl.tahun % 4 == 0 && tgl.tahun % 100 != 0) || (tgl.tahun % 400 == 0)) {
                tgl.hari = 29;
            } else {
                tgl.hari = 28;
            }
            tgl.bulan--;
        } else {
            tgl.hari = 30;
            tgl.bulan--;
        }
    } else {
        tgl.hari--;
    }
    cout << "Tanggal sebelumnya: " << tgl.hari << "-" << tgl.bulan << "-" << tgl.tahun << endl;
}

void TampilkanTanggal(tanggal tgl) {
    cout << "Tanggal: " << tgl.hari << "-" << tgl.bulan << "-" << tgl.tahun << endl;
}

int main() {
    tanggal tgl;
    cout << "Masukkan tanggal(dd mm yyyy): ";
    cin >> tgl.hari >> tgl.bulan >> tgl.tahun;
    TampilkanTanggal(tgl);
    tanggalSebelumnya(tgl);

    return 0;
}