#include <iostream>
using namespace std;

int main(){
    int tahun, bulan, hari, proyek, sisa;
    cout << "Masukkan total hari proyek berjalan: ";
    cin >> proyek;

    tahun = proyek/365;
    sisa = proyek%365;
    bulan = sisa/30;
    hari = sisa%30;

    cout <<"Proyek dikerjakan selama " << tahun << " tahun " << bulan << " bulan " << hari << " hari " << endl; 

    return 0;
}