#include <iostream>
#include <string>
using namespace std;

struct jam
{
    int hh, mm, ss;    
};


int main(){
    jam j1, j2, j3;
    int durasi;
    string kodeWil;
    double pulsaWil, tarifWil, biaya;

    cout << "Masukkan Waktu awal (jj/mm/ss): ";
    cin >> j1.hh >> j1.mm >> j1.ss;
    cout << "Masukkan Waktu akhir (jj/mm/ss): ";
    cin >> j2.hh >> j2.mm >> j2.ss;
    cout << "Masukkan kode wilayah: ";
    cin >> kodeWil;

    // Pengurangan detik
    if (j2.ss > j1.ss){
        j3.ss = j2.ss - j1.ss;
    }
    else{
        j3.ss = (j2.ss + 60) - j1.ss;
        j2.mm = j2.mm - 1;
    }
    // Pengurangan menit
    if (j2.mm > j1.mm){
        
    }

    return 0;
}