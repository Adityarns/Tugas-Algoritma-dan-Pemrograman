#include <iostream> 
#include <cmath>  // Untuk ceil()
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
    double pulsaWil = 0, tarifWil = 0, biaya, pulsa;

    cout << "Masukkan Waktu awal (jj mm ss): ";
    cin >> j1.hh >> j1.mm >> j1.ss;
    cout << "Masukkan Waktu akhir (jj mm ss): ";
    cin >> j2.hh >> j2.mm >> j2.ss;
    cout << "Masukkan kode wilayah: ";
    cin >> kodeWil;

    // Pengurangan detik
    if (j2.ss < j1.ss) {
        j2.ss += 60;
        j2.mm -= 1;
    }
    j3.ss = j2.ss - j1.ss;

    // Pengurangan menit
    if (j2.mm < j1.mm) {
        j2.mm += 60;
        j2.hh -= 1;
    }
    j3.mm = j2.mm - j1.mm;

    // Pengurangan jam
    if (j2.hh < j1.hh) {
        j2.hh += 24;
    }
    j3.hh = j2.hh - j1.hh;

    durasi = (j3.hh * 3600) + (j3.mm * 60) + j3.ss;

    if (kodeWil == "021"){
        pulsaWil = 60;
        tarifWil = 150;
    }
    else if(kodeWil == "0751"){
        pulsaWil = 30;
        tarifWil = 250;
    }
    else if(kodeWil == "0737"){
        pulsaWil = 25;
        tarifWil = 375;
    }
    else if(kodeWil == "0912"){
        pulsaWil = 20;
        tarifWil = 415;
    }
    else if(kodeWil == "0981"){
        pulsaWil = 17;
        tarifWil = 510;
    }
    else {
        cout << "Kode wilayah tidak dikenali!" << endl;
        return 1; 
    }

    pulsa = ceil(durasi / pulsaWil);
    biaya = pulsa * tarifWil;

    cout << "Lama percakapan: " << j3.hh << " jam " << j3.mm << " menit " << j3.ss << " detik\n";
    cout << "Total durasi: " << durasi << " detik\n";
    cout << "Biaya: Rp. " << biaya << endl;

    return 0;
}
