#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "global.hpp"

using namespace std;

void showMenuPulsa() {
    int userInput2;

    do {
        if (dataPulsa[akunAktif].nomorHp.empty() || dataPulsa[akunAktif].nomorHp == "-") {
            cout << "\n[!] Nomor HP belum terdaftar pada akun Anda.\n";
            cout << "Silakan masukkan nomor HP Anda terlebih dahulu: ";
            string nomorBaru;
            cin >> nomorBaru;

            dataPulsa[akunAktif].nomorHp = nomorBaru;
            simpanDataAkun();
            cout << "[✓] Nomor HP berhasil ditambahkan.\n";
        }

        cout << "\n==============================" << endl;
        cout << "|           My Pulsa         |" << endl;
        cout << "|============================|" << endl;
        cout << "| Saldo Anda: Rp. " << dataPulsa[akunAktif].saldo << endl;
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

                // Ambil kontak dari kontak.txt
                ifstream kontakFile("kontak.txt");
                string user, nomorTujuan, nama;
                vector<int> mapping;
                int nomorUrut = 1;

                while (kontakFile >> user >> nomorTujuan >> ws && getline(kontakFile, nama)) {
                    if (user == akunSaatini) {
                        // Cari nomorTujuan di dataPulsa
                        for (int i = 0; i < akunTerdaftar; ++i) {
                            if (dataPulsa[i].nomorHp == nomorTujuan) {
                                cout << "| " << nomorUrut << ". " << nama << " (" << nomorTujuan << ")\n";
                                mapping.push_back(i); // simpan index akun tujuan
                                nomorUrut++;
                                break;
                            }
                        }
                    }
                }
                kontakFile.close();

                if (mapping.empty()) {
                    cout << "| Anda belum memiliki kontak yang valid untuk transfer |\n";
                    cout << "==============================\n";
                    break;
                }

                cout << "==============================" << endl;
                int pilihan;
                cout << "Masukkan nomor tujuan: ";
                cin >> pilihan;

                if (pilihan < 1 || pilihan > mapping.size()) {
                    cout << "Pilihan tidak valid.\n";
                    break;
                }

                int indeksTujuan = mapping[pilihan - 1];
                cout << "Jumlah transfer: Rp. ";
                cin >> dataPulsa[akunAktif].transfer;

                if (dataPulsa[akunAktif].transfer > dataPulsa[akunAktif].saldo) {
                    cout << "Saldo tidak cukup.\n";
                } else {
                    dataPulsa[akunAktif].saldo -= dataPulsa[akunAktif].transfer;
                    dataPulsa[indeksTujuan].saldo += dataPulsa[akunAktif].transfer;
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
                cin >> dataPulsa[akunAktif].topUp;
                dataPulsa[akunAktif].saldo += dataPulsa[akunAktif].topUp;
                cout << "Top up berhasil.\n";
                simpanDataAkun();
                break;

            case 3:
                cout << "\nKembali ke menu utama...\n";
                break;

            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }

    } while (userInput2 != 3);
}
