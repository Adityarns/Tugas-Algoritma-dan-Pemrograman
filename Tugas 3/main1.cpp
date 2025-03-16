#include <iostream>
using namespace std;

int main(){
    double waktu, detik, menit, jam, pilihan, hasil, hari;
    cout <<"Masukkan waktu: ";
    cin >> waktu;

    hari = waktu/86400;
    jam = waktu/3600;
    menit = waktu/60;
    detik = waktu;

    cout << "Total: " << hari << " Hari " << jam << " Jam " << menit << " menit " << detik << " detik " << endl;
    return 0;
}