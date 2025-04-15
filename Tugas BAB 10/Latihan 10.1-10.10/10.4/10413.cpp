#include <iostream>
using namespace std;

struct Jam {
    int hh;
    int mm;
    int ss;
};

void JamBerikutnya(Jam &j) {
    int totalDetik, sisaDetik;
    totalDetik = j.hh * 3600 + j.mm * 60 + j.ss;
    totalDetik = totalDetik + 1;
    j.hh = (totalDetik / 3600) % 24; 
    sisaDetik = totalDetik % 3600;
    j.mm = sisaDetik / 60;
    j.ss = sisaDetik % 60;
}

bool validasiWaktu(const Jam &j) {
    return (j.hh >= 0 && j.hh < 24) && (j.mm >= 0 && j.mm < 60) && (j.ss >= 0 && j.ss < 60);
}

int main() {
    Jam j;

    cout << "Masukkan Waktu (hh mm ss): ";
    cin >> j.hh >> j.mm >> j.ss;

    if (!validasiWaktu(j)) {
        cout << "Waktu yang dimasukkan tidak valid!" << endl;
        return 1;
    }

    JamBerikutnya(j);

    cout << "Waktu setelah ditambahkan: " 
         << (j.hh < 10 ? "0" : "") << j.hh << ":" 
         << (j.mm < 10 ? "0" : "") << j.mm << ":" 
         << (j.ss < 10 ? "0" : "") << j.ss << endl;

    return 0;
}