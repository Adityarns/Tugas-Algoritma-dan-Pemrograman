#include <iostream>
#include <fstream>
#include <string>
#include "global.hpp"

using namespace std;

void showMenuAtm() {
    int userInput2;

    do {
        cout << "\n==============================" << endl;
        cout << "|           My Pulsa         |" << endl;
        cout << "|============================|" << endl;
        cout << "| Saldo Anda: Rp. " << dataATM[akunAktif].saldo << endl;
        cout << "|============================|" << endl;
        cout << "| 1. Transfer Pulsa          |" << endl;
        cout << "| 2. Isi Pulsa               |" << endl;
        cout << "| 3. Kembali                 |" << endl;
        cout << "==============================" << endl;
        cout << "Pilihan Anda: ";
        cin >> userInput2;

        switch (userInput2) {
            case 1: {
                cout << "\n==============================" << endl;
                cout << "|     PILIH TUJUAN TRANSFER  |" << endl;
                cout << "==============================" << endl;

                int nomor = 1;
                int mapping[100]; // menyimpan indeks asli tujuan

                for (int i = 0; i < akunTerdaftar; i++) {
                    if (i == akunAktif) continue;
                    cout << "| " << nomor << ". " << usernames[i] << endl;
                    mapping[nomor - 1] = i;
                    nomor++;
                }
                if (nomor == 1) {
                    cout << "| Tidak ada akun lain tersedia |\n";
                    cout << "==============================" << endl;
                    break;
                }

                cout << "==============================" << endl;
                int pilihan;
                cout << "Masukkan nomor tujuan: ";
                cin >> pilihan;

                if (pilihan < 1 || pilihan >= nomor) {
                    cout << "Pilihan tidak valid.\n";
                    break;
                }

                int indeksTujuan = mapping[pilihan - 1];
                cout << "Jumlah transfer: Rp. ";
                cin >> dataATM[akunAktif].transfer;

                if (dataATM[akunAktif].transfer > dataATM[akunAktif].saldo) {
                    cout << "Saldo tidak cukup.\n";
                } else {
                    dataATM[akunAktif].saldo -= dataATM[akunAktif].transfer;
                    dataATM[indeksTujuan].saldo += dataATM[akunAktif].transfer;
                    cout << "Transfer berhasil ke " << usernames[indeksTujuan] << "!\n";
                    simpanDataAkun();
                }
                break;
            }

            case 2:
                cout << "\n====================================" << endl;
                cout << "|              TOP UP              |" << endl;
                cout << "====================================" << endl;
                cout << "Masukkan jumlah Top Up: Rp. ";
                cin >> dataATM[akunAktif].topUp;
                dataATM[akunAktif].saldo += dataATM[akunAktif].topUp;
                cout << "Top up berhasil.\n";
                break;

            case 3:
                simpanDataAkun();
                cout << "\nKembali ke menu utama...\n";
                break;

            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }

    } while (userInput2 != 3);
}
