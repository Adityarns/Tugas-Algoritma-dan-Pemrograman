#include <iostream>
#include <string>
#include <fstream>
#include "global.hpp"

using namespace std;

void tambahKontak(string usernameAktif);
void tampilkanKontak(string username);

void showMenuKontak() {
    int userInput;
    do {
        cout << "\n==============================\n";
        cout << "|           KONTAK           |\n";
        cout << "|============================|\n";
        tampilkanKontak(akunSaatini);
        cout << "|============================|\n";
        cout << "|  0. Tambah Kontak          |\n";
        cout << "| -1. Logout                 |\n";
        cout << "==============================\n";
        cout << "Pilih: ";
        cin >> userInput;
        cin.ignore(); // untuk mencegah input loncat

        switch (userInput) {
            case 0:
                tambahKontak(akunSaatini);
                break;
            case -1:
                akunSaatini = "";
                cout << "\nLogout berhasil.\n";
                break;
            default:
                cout << "\nPilihan tidak valid. Coba lagi.\n";
        }
    } while (userInput != -1);
}

void tambahKontak(string usernameAktif) {
    string nomorDicari;
    cout << "\nMasukkan nomor HP : ";
    cin >> nomorDicari;
    cin.ignore();

    ifstream akunFile("akun.txt");
    bool ditemukan = false;
    string uname, pass, nomor;
    int saldo;

    while (akunFile >> uname >> pass >> saldo >> nomor) {
        if (nomor == nomorDicari) {
            ditemukan = true;

            // Cek apakah kontak sudah ada
            ifstream kontakCek("kontak.txt");
            string u, no, nama;
            bool sudahAda = false;
            while (kontakCek >> u >> no >> ws && getline(kontakCek, nama)) {
                if (u == usernameAktif && no == nomorDicari) {
                    sudahAda = true;
                    break;
                }
            }
            kontakCek.close();

            if (sudahAda) {
                cout << "Kontak ini sudah ada dalam daftar Anda.\n";
                return;
            }

            cout << "\nNomor ditemukan a/n: " << uname << endl;
            string namaTersimpan;
            cout << "Masukkan nama yang ingin disimpan untuk kontak ini (ENTER = '" << uname << "'): ";
            getline(cin, namaTersimpan);
            if (namaTersimpan.empty()) namaTersimpan = uname;

            // Simpan ke kontak.txt
            ofstream kontakFile("kontak.txt", ios::app);
            if (kontakFile.is_open()) {
                kontakFile << usernameAktif << " " << nomorDicari << " " << namaTersimpan << endl;
                kontakFile.close();
                cout << "Kontak berhasil ditambahkan!\n";
            } else {
                cout << "Gagal menyimpan kontak.\n";
            }
            break;
        }
    }

    akunFile.close();
    if (!ditemukan) {
        cout << "Nomor tidak terdaftar dalam akun.\n";
    }
}

void tampilkanKontak(string username) {
    ifstream file("kontak.txt");
    string user, nomor, namaKontak;
    bool adaKontak = false;

    while (file >> user >> nomor >> ws && getline(file, namaKontak)) {
        int i = 0;
        if (user == username) {
            cout << "|  " << i + 1  << ". " << namaKontak << " (" << nomor << ")\n";
            adaKontak = true;
            i++;
        }
    }
    if (!adaKontak) {
        cout << "Anda belum memiliki kontak.\n";
    }
    file.close();
}
