#include <iostream>
#include <string>
#include <fstream>
#include "global.hpp"

using namespace std;

void hapusKontak(string usernameAktif);
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
        cout << "| -1. Hapus Kontak           |\n"; // Tambahan opsi
        cout << "| -2. Keluar                 |\n";
        cout << "==============================\n";
        userInput = inputInt("Pilih: ");

        switch (userInput) {
            case 0:
                tambahKontak(akunSaatini);
                break;
            case -1:
                hapusKontak(akunSaatini); // Panggil fungsi baru
                break;
            case -2:
                break;
            default:
                cout << "\nPilihan tidak valid. Coba lagi.\n";
        }
    } while (userInput != -2);
}


void tambahKontak(string usernameAktif) {
    string nomorDicari;
    cout << "\n========================================\n";
    cout << "|           TAMBAHKAN KONTAK           |\n";
    cout << "|======================================|\n";
    cout << "| Masukkan nomor HP : ";
    cin >> nomorDicari;
    cout << "|======================================|\n";
    
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
                cout << "\n===========================================\n";
                cout << "| Kontak ini sudah ada dalam daftar Anda. |\n";
                cout << "===========================================\n";
                return;
            }
            
            cout << "| Nomor ditemukan a/n: " << uname << endl;
            cout << "|======================================|\n";
            string namaTersimpan;
            cout << "| Masukkan Nama (Enter = '" << uname << "'): ";
            getline(cin, namaTersimpan);
            cin.ignore();
            cout << "========================================\n";

            if (namaTersimpan.empty()) namaTersimpan = uname;
            
            // Simpan ke kontak.txt
            ofstream kontakFile("kontak.txt", ios::app);
            if (kontakFile.is_open()) {
                kontakFile << usernameAktif << " " << nomorDicari << " " << namaTersimpan << endl;
                kontakFile.close();
                cout << "\n===============================\n";
                cout << "| Kontak berhasil ditambahkan. |\n";
                cout << "================================\n";
            } else {
                cout << "\n===========================\n";
                cout << "| Gagal menyimpan kontak. |\n";
                cout << "===========================\n";
            }
            break;
        }
    }
    
    akunFile.close();
    if (!ditemukan) {
        cout << "\n=====================================\n";
        cout << "| Nomor tidak terdaftar dalam akun. |\n";
        cout << "=====================================\n";
    }
}

void tampilkanKontak(string username) {
    ifstream file("kontak.txt");
    string user, nomor, namaKontak;
    bool adaKontak = false;
    int i = 1; // dipindah ke luar

    while (file >> user >> nomor >> ws && getline(file, namaKontak)) {
        if (user == username) {
            cout << "|  " << i << ". " << namaKontak << " (" << nomor << ")\n";
            adaKontak = true;
            i++; // naikkan penomoran
        }
    }

    if (!adaKontak) {
        cout << "| Anda belum memiliki kontak |\n";
    }

    file.close();
}

void hapusKontak(string usernameAktif) {
    vector<pair<string, string>> daftarKontak; // <nomor, nama>
    ifstream file("kontak.txt");
    string user, nomor, namaKontak;

    while (file >> user >> nomor >> ws && getline(file, namaKontak)) {
        if (user == usernameAktif) {
            daftarKontak.push_back({nomor, namaKontak});
        }
    }
    file.close();

    if (daftarKontak.empty()) {
        cout << "\n====================================\n";
        cout << "| Anda belum memiliki kontak.      |\n";
        cout << "====================================\n";
        return;
    }

    cout << "\n====================================\n";
    cout << "|           HAPUS KONTAK           |\n";
    cout << "====================================\n";
    for (int i = 0; i < daftarKontak.size(); ++i) {
        cout << "|  " << (i + 1) << ". " << daftarKontak[i].second << " (" << daftarKontak[i].first << ")\n";
    }
    cout << "====================================\n";

    
    int pilih = inputInt("Pilih nomor kontak yang ingin dihapus (0 untuk batal): ");
    while (pilih != 0){
        if (pilih <= 0 || pilih > daftarKontak.size()) {
        cout << "\nBatal menghapus kontak.\n";
        return;
        }

        string nomorHapus = daftarKontak[pilih - 1].first;

        // Proses hapus
        ifstream inFile("kontak.txt");
        ofstream outFile("temp.txt");

        while (inFile >> user >> nomor >> ws && getline(inFile, namaKontak)) {
            if (!(user == usernameAktif && nomor == nomorHapus)) {
                outFile << user << " " << nomor << " " << namaKontak << endl;
            }
        }

        inFile.close();
        outFile.close();

        remove("kontak.txt");
        rename("temp.txt", "kontak.txt");

        cout << "\n====================================\n";
        cout << "| Kontak berhasil dihapus.         |\n";
        cout << "====================================\n";
        break;
    }
}
