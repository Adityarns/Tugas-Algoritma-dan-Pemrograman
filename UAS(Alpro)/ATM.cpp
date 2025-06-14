#include <iostream>
#include <fstream>
#include <string>
#include "global.hpp"

using namespace std;

void showMenuAtm() {
    int userInput2;

    do {
        cout << "\n--- ATM ---" << endl;
        cout << "SALDO ANDA: Rp" << dataATM[akunAktif].saldo << endl;
        cout << "1. TRANSFER" << endl;
        cout << "2. TOP UP" << endl;
        cout << "3. KEMBALI" << endl;
        cout << "Jawaban: ";
        cin >> userInput2;

        switch (userInput2) {
            case 1: {
                cout << "\nPilih Rekening yang ingin ditransfer:\n";
                int nomor = 1;
                int mapping[100]; // simpan indeks asli

                // Menampilkan semua akun kecuali akun aktif
                for (int i = 0; i < akunTerdaftar; i++) {
                    if (i == akunAktif) continue;
                    cout << nomor << ". " << usernames[i] << endl;
                    mapping[nomor - 1] = i;
                    nomor++;
                }

                if (nomor == 1) {
                    cout << "Tidak ada akun lain untuk ditransfer.\n";
                    break;
                }

                int pilihan;
                cout << "Masukkan nomor akun tujuan transfer: ";
                cin >> pilihan;

                // Validasi pilihan
                if (pilihan < 1 || pilihan >= nomor) {
                    cout << "Pilihan tidak valid.\n";
                    break;
                }

                int indeksTujuan = mapping[pilihan - 1];

                cout << "Masukkan jumlah uang yang ingin ditransfer: ";
                cin >> dataATM[akunAktif].transfer;

                if (dataATM[akunAktif].transfer > dataATM[akunAktif].saldo) {
                    cout << "Saldo tidak cukup.\n";
                } else {
                    dataATM[akunAktif].saldo -= dataATM[akunAktif].transfer;
                    dataATM[indeksTujuan].saldo += dataATM[akunAktif].transfer;
                    cout << "Transfer berhasil ke " << usernames[indeksTujuan] << ".\n";
                    simpanDataAkun();
                }
                break;
            }

            case 2:
                cout << "Masukkan jumlah uang yang ingin dimasukkan: ";
                cin >> dataATM[akunAktif].topUp;
                dataATM[akunAktif].saldo += dataATM[akunAktif].topUp;
                cout << "Top up berhasil.\n";
                break;

            case 3:
                simpanDataAkun();
                cout << "Kembali ke menu utama.\n";
                break;

            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }

    } while (userInput2 != 3);
}
