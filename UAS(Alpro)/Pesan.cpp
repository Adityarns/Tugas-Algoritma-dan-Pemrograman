#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>
#include "global.hpp"
using namespace std;

void kirimPesan();
void tampilkanPesanMasuk();

void showMenuPesan() {
    int pilihan;
    do {
        cout << "\n=========================\n";
        cout << "|       MENU PESAN      |\n";
        cout << "|=======================|\n";
        cout << "| 1. Pesan Masuk        |" << endl;
        cout << "| 2. Kirim Pesan        |" << endl;
        cout << "| 3. Kembali            |" << endl;
        cout << "=========================\n";
        cout << "Pilih opsi: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                tampilkanPesanMasuk();
                break;
            case 2:
                kirimPesan();
                break;
            case 3:
                return;
            default:
                cout << "[!] Pilihan tidak valid." << endl;
        }
    } while (pilihan != 3);
}

void kirimPesan() {
    cout << "\n=========================\n";
    cout << "|       KIRIM PESAN     |\n";
    cout << "=========================\n";

    // 1. Ambil daftar kontak milik akunSaatini
    vector<pair<string, string>> daftarKontak; // (nomor, nama)
    ifstream kontakFile("kontak.txt");
    string user, nomor, nama;

    while (kontakFile >> user >> nomor >> ws && getline(kontakFile, nama)) {
        if (user == akunSaatini) {
            daftarKontak.push_back({nomor, nama});
        }
    }
    kontakFile.close();

    if (daftarKontak.empty()) {
        cout << "[!] Anda belum memiliki kontak. Tambahkan dulu melalui menu kontak.\n";
        return;
    }

    cout << "\nDaftar kontak Anda:\n";
    for (int i = 0; i < daftarKontak.size(); ++i) {
        cout << i + 1 << ". " << daftarKontak[i].second << " (" << daftarKontak[i].first << ")\n";
    }

    int pilihan;
    cout << "Pilih nomor kontak tujuan (1-" << daftarKontak.size() << "): ";
    cin >> pilihan;
    cin.ignore();

    if (pilihan < 1 || pilihan > daftarKontak.size()) {
        cout << "[!] Pilihan tidak valid.\n";
        return;
    }

    string nomorTujuan = daftarKontak[pilihan - 1].first;
    string isiPesan;
    cout << "Tulis pesan: ";
    getline(cin, isiPesan);

    ofstream fileOut("pesan.txt", ios::app);
    fileOut << akunSaatini << "|" << nomorTujuan << "|" << isiPesan << endl;
    fileOut.close();

    cout << "[✓] Pesan berhasil dikirim ke " << daftarKontak[pilihan - 1].second << endl;
}


void tampilkanPesanMasuk() {
    cout << "\n=== PILIH PENGIRIM PESAN ===" << endl;
    ifstream fileIn("pesan.txt");
    string line;
    vector<string> pengirimUnik;

    while (getline(fileIn, line)) {
        stringstream ss(line);
        string dari, ke, isi;
        getline(ss, dari, '|');
        getline(ss, ke, '|');
        getline(ss, isi);

        if (ke == usernames[akunAktif]) {
            if (find(pengirimUnik.begin(), pengirimUnik.end(), dari) == pengirimUnik.end()) {
                pengirimUnik.push_back(dari);
            }
        }
    }
    fileIn.close();

    if (pengirimUnik.empty()) {
        cout << "[!] Tidak ada pesan masuk." << endl;
        return;
    }

    for (int i = 0; i < pengirimUnik.size(); ++i) {
        cout << i + 1 << ". " << pengirimUnik[i] << endl;
    }

    int pilihan;
    cout << "Pilih pengirim (nomor): ";
    cin >> pilihan;
    cin.ignore();

    if (pilihan < 1 || pilihan > pengirimUnik.size()) {
        cout << "[!] Pilihan tidak valid." << endl;
        return;
    }

    string targetPengirim = pengirimUnik[pilihan - 1];

    cout << "\n=== PESAN DARI " << targetPengirim << " ===" << endl;
    fileIn.open("pesan.txt");
    int count = 0;
    while (getline(fileIn, line)) {
        stringstream ss(line);
        string dari, ke, isi;
        getline(ss, dari, '|');
        getline(ss, ke, '|');
        getline(ss, isi);

        if (ke == usernames[akunAktif] && dari == targetPengirim) {
            cout << "- " << isi << endl;
            count++;
        }
    }
    fileIn.close();

    if (count == 0) {
        cout << "[!] Tidak ada pesan dari pengirim tersebut." << endl;
    }
}
