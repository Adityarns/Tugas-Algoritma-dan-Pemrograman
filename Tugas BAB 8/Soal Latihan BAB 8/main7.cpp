#include <iostream>
using namespace std;

int main() {
    int saldo = 10000;
    int kodeTransaksi, jumlah;
    do {
        cout << "Saldo saat ini: Rp" << saldo << endl;
        cout << "Masukkan kode transaksi (0: setor, 1: ambil, -1: keluar): ";
        cin >> kodeTransaksi;

        if (kodeTransaksi == 0) {
            cout << "Masukkan jumlah uang yang disetor: Rp";
            cin >> jumlah;
            saldo += jumlah;
        } else if (kodeTransaksi == 1) {
            cout << "Masukkan jumlah uang yang diambil: Rp";
            cin >> jumlah;
            if (saldo - jumlah >= 10000) {
                saldo -= jumlah;
            } else {
                cout << "Transaksi gagal: Saldo minimum Rp10.000 harus dipertahankan." << endl;
            }
        }
    } while (kodeTransaksi != -1 && saldo >= 10000);
    cout << "Saldo akhir: Rp" << saldo << endl;
    return 0;
}