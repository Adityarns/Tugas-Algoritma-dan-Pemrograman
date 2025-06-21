#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include "calculator.cpp"
#include "game.cpp"
#include "goFood.cpp"
#include "Pesan.cpp"
#include "Kontak.cpp"
#include "global.hpp"

using namespace std;

void buatAkun();
void inputlogin();
void simpanDataAkun();
void muatDataAkun();
void showMenuPulsa();
void showMenuKalkulator();
void showMenuGame();
void showMenuGoFood();
void showMenuKontak();
string inputSandiDenganBintang();
void kirimPesan();

string usernames[maxUser];
string sandi[maxUser];
string akunSaatini;
Pulsa dataPulsa[maxUser];
int akunTerdaftar = 0;
int akunAktif = 0;

void Start() {
    muatDataAkun();
    int userInput;
    do {
        cout << "\n==============================\n";
        cout << "|        MENU UTAMA          |\n";
        cout << "|============================|\n";
        cout << "|  1. Login                  |\n";
        cout << "|  2. Buat Akun Baru         |\n";
        cout << "|  3. Keluar                 |\n";
        cout << "==============================\n";
        cout << "Pilih: ";
        cin >> userInput;

        switch (userInput) {
            case 1: inputlogin(); break;
            case 2: buatAkun(); break;
            case 3:
                cout << "\n Terima kasih telah menggunakan aplikasi ini!\n";
                break;
            default:
                cout << "\n Pilihan tidak valid. Ulangi.\n";
        }
    } while (userInput != 3);
}

void showMenuUtama() {
    int userInput1;
    do {
        cout << "\n==============================\n";
        cout << "|         FITUR APP          |\n";
        cout << "|============================|\n";
        cout << "| 1. MyPulsa                 |\n";
        cout << "| 2. Kontak                  |\n";
        cout << "| 3. Pesan                   |\n";
        cout << "| 4. Kalkulator              |\n";
        cout << "| 5. GO-Food                 |\n";
        cout << "| 6. Game                    |\n";
        cout << "| 7. Logout / Keluar         |\n";
        cout << "==============================\n";
        cout << "Pilih: ";
        cin >> userInput1;

        switch (userInput1) {
            case 1: showMenuPulsa(); break;
            case 2: showMenuKontak(); break;
            case 3: showMenuPesan(); break;
            case 4: showMenuKalkulator(); break;
            case 5: showMenuGoFood(); break;
            case 6: showMenuGame(); break;
            case 7:
                cout << "\n Logout. Kembali ke menu awal.\n";
                return;
            default:
                cout << "\n Pilihan tidak valid.\n";
        }
    } while (true);
}

void inputlogin() {
    string inputNama, inputSandi;
    bool loginSukses = false;

    for (int i = 0; i < 3; i++) {
        cout << "\n==============================\n";
        cout << "|         LOGIN USER         |\n";
        cout << "==============================\n";
        cout << "Username : ";
        cin >> inputNama;
        cout << "Sandi    : ";
        inputSandi = inputSandiDenganBintang();

        for (int j = 0; j < akunTerdaftar; j++) {
            if (usernames[j] == inputNama && sandi[j] == inputSandi) {
                akunAktif = j;
                akunSaatini = usernames[j];
                cout << "\nLogin berhasil. Selamat datang, " << inputNama << "!\n";
                loginSukses = true;
                showMenuUtama();
                return;
            }
        }
        cout << "\nUsername atau sandi salah. Coba lagi.\n";
    }

    cout << "\nGagal login setelah 3 kali percobaan.\n";
}

void buatAkun() {
    cout << "\n==============================\n";
    cout << "|         BUAT AKUN          |\n";
    cout << "==============================\n";

    if (akunTerdaftar >= maxUser) {
        cout << "Kapasitas akun penuh.\n";
        return;
    }

    string newUsername, newPassword;
    cout << "Username baru: ";
    cin >> newUsername;

    for (int i = 0; i < akunTerdaftar; ++i) {
        if (usernames[i] == newUsername) {
            cout << "Username sudah ada.\n";
            return;
        }
    }

    cout << "Sandi baru   : ";
    newPassword = inputSandiDenganBintang();

    usernames[akunTerdaftar] = newUsername;
    sandi[akunTerdaftar] = newPassword;
    dataPulsa[akunTerdaftar].saldo = 10000;
    akunTerdaftar++;
    simpanDataAkun();
}

void simpanDataAkun() {
    ofstream file("akun.txt");
    if (file.is_open()) {
        for (int i = 0; i < akunTerdaftar; ++i) {
            file << usernames[i] << " " << sandi[i] << " "
                 << dataPulsa[i].saldo << " " << dataPulsa[i].nomorHp << endl;
        }
        file.close();
    } else {
        cout << "Gagal menyimpan data akun.\n";
    }
}


void muatDataAkun() {
    ifstream file("akun.txt");
    string uname, pass, nomor;
    int saldo;
    akunTerdaftar = 0;
    if (file.is_open()) {
        while (file >> uname >> pass >> saldo >> nomor && akunTerdaftar < maxUser) {
            usernames[akunTerdaftar] = uname;
            sandi[akunTerdaftar] = pass;
            dataPulsa[akunTerdaftar].saldo = saldo;
            dataPulsa[akunTerdaftar].nomorHp = nomor;
            akunTerdaftar++;
        }
        file.close();
    } else {
        cout << "(Info: File akun.txt belum tersedia.)\n";
    }
}


string inputSandiDenganBintang() {
    string pass;
    char ch;
    while ((ch = getch()) != '\r') { // '\r' adalah Enter
        if (ch == '\b') { // jika Backspace
            if (!pass.empty()) {
                cout << "\b \b"; // hapus satu karakter di layar
                pass.pop_back();
            }
        } else {
            pass.push_back(ch);
            cout << '*';
        }
    }
    cout << endl;
    return pass;
}

