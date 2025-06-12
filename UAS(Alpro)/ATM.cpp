#include <iostream>
#include <fstream>
#include <string>
#include "global.hpp"

using namespace std;

// struct ATM {
//     int saldo = 10000;
//     int transfer;
//     int tarikTunai;
//     int topUp;
// };

// Array ATM untuk tiap akun
// ATM dataATM[maxUser];

// Variabel untuk menyimpan indeks akun yang sedang login
// int akunAktif = -1;

// void muatSaldo(){
//     // Membaca saldo dari file akun.txt (jika ada)
//     ifstream fileInput("akun.txt");
//     if (fileInput.is_open()) {
//         fileInput >> dataATM[akunAktif].saldo;
//         fileInput.close();
//     } else {
//         // Jika file tidak ada, akan memakai saldo default 10000
//         cout << "File akun.txt tidak ditemukan. Menggunakan saldo default.\n";
//     }
// }

// void simpanSaldo(){
//     // Menyimpan saldo ke file sebelum keluar
//     ofstream fileOutput("akun.txt");
//     if (fileOutput.is_open()) {
//         fileOutput << userAtm.saldo;
//         fileOutput.close();
//         cout << "Saldo berhasil disimpan ke akun.txt.\n";
//     } else {
//         cout << "Gagal menyimpan saldo ke file.\n";
//     }
// }
void showMenuAtm() {
    int userInput2;

    do {
        cout << "\n--- ATM ---" << endl;
        cout << "SALDO ANDA: Rp" << dataATM[akunAktif].saldo << endl;
        cout << "1. TRANSFER" << endl;
        cout << "2. TOP UP" << endl;
        cout << "3. TARIK TUNAI" << endl;
        cout << "4. KEMBALI" << endl;
        cout << "Jawaban: ";
        cin >> userInput2;

        switch (userInput2) {
            case 1:
                cout << "Masukkan jumlah uang yang ingin ditransfer: ";
                cin >> dataATM[akunAktif].transfer;
                if (dataATM[akunAktif].transfer > dataATM[akunAktif].saldo) {
                    cout << "Saldo tidak cukup.\n";
                } else {
                    dataATM[akunAktif].saldo -= dataATM[akunAktif].transfer;
                    cout << "Transfer berhasil.\n";
                }
                break;

            case 2:
                cout << "Masukkan jumlah uang yang ingin dimasukkan: ";
                cin >> dataATM[akunAktif].topUp;
                dataATM[akunAktif].saldo += dataATM[akunAktif].topUp;
                cout << "Top up berhasil.\n";
                break;

            case 3:
                cout << "Masukkan jumlah uang yang ingin ditarik: ";
                cin >> dataATM[akunAktif].tarikTunai;
                if (dataATM[akunAktif].tarikTunai > dataATM[akunAktif].saldo) {
                    cout << "Saldo tidak cukup.\n";
                } else {
                    dataATM[akunAktif].saldo -= dataATM[akunAktif].tarikTunai;
                    cout << "Penarikan berhasil.\n";
                }
                break;

            case 4:
                simpanDataAkun();
                cout << "Kembali ke menu utama.\n";
                break;

            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }

    } while (userInput2 != 4);
}


