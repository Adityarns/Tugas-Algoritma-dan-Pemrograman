#include <iostream>
using namespace std;

struct jam{
    int hh;
    int mm;
    int ss;
};

int main(){
    int totalDetik;
    jam j;
    cout << "Masukkan waktu tempuh pelari maraton (Jam, menit, detik): ";
    cin >> j.hh >> j.mm >> j.ss;
    totalDetik = (j.hh * 3600) + (j.mm * 60) + j.ss;
    cout << "Total detik yang dibutuhkan pelari maraton: " << totalDetik  << " detik" << endl;

    return 0;
}