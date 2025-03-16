#include <iostream>
using namespace std;

int main() {
    int kelahiran, imigrasi, kematian, pindah, x, hasil;

    cout << "---Program penghitung jumlah penduduk suatu negara--- " << endl;
    cout << "Masukkan jumlah kelahiran: ";
    cin >> kelahiran;
    cout << "Masukkan jumlah penduduk yang berimigrasi: ";
    cin >> imigrasi;
    cout << "Masukkan jumlah penduduk yang meninggal: ";
    cin >> kematian;
    cout << "Masukkan jumlah penduduk yang pindah: ";
    cin >> pindah;
    
    x+=kelahiran;
    x+=imigrasi;
    x-=kematian;
    x-=pindah;

    hasil = x;
    cout << "Jumlah penduduk pada negara tersebut adalah " << hasil << " Jiwa " << endl;
    
    return 0;
}
