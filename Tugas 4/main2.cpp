#include <iostream>
#include <string>
using namespace std;

int main(){
    double nilaiTunjangan = 0.2, nilaiPajak = 0.15, tunjangan, pajak, gajiPokok, gajiBersih;
    string namaKaryawan;

    cout <<"Masukkan nama karyawan: ";
    cin >> namaKaryawan;
    cout <<"Masukkan gaji pokok: ";
    cin >> gajiPokok;
    tunjangan = nilaiTunjangan * gajiPokok;
    gajiBersih = gajiPokok + tunjangan;
    pajak = nilaiPajak * gajiBersih;
    gajiBersih = (gajiPokok+tunjangan) - pajak;
    
    cout << "Gaji bersih karyawan: " << gajiBersih << endl;


    return 0;
}