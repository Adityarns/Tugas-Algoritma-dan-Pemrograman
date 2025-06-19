#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include "calculator.cpp"
#include "game.cpp"
#include "Ecommerce.cpp"
#include "kontak.cpp"
#include "global.hpp"

using namespace std;

void buatAkun();
void inputlogin();
void simpanDataAkun();
void muatDataAkun();
void showMenuAtm();
void showMenuKalkulator();
void showMenuGame();
void showMenuEcommerce();
string inputSandiDenganBintang();
void kirimPesan();

string usernames[maxUser];
string sandi[maxUser];
ATM dataATM[maxUser];
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
                cout << "\n[!] Terima kasih telah menggunakan aplikasi ini!\n";
                break;
            default:
                cout << "\n[!] Pilihan tidak valid. Ulangi.\n";
        }
    } while (userInput != 3);
}

void showMenuUtama() {
    int userInput1;
    do {
        cout << "\n==============================\n";
        cout << "|         FITUR APP          |\n";
        cout << "|============================|\n";
        cout << "| 1. ATM                     |\n";
        cout << "| 2. Kalkulator              |\n";
        cout << "| 3. GO-Food                 |\n";
        cout << "| 4. Game                    |\n";
        cout << "| 5. Kontak                  |\n";
        cout << "| 6. Logout / Keluar         |\n";
        cout << "==============================\n";
        cout << "Pilih: ";
        cin >> userInput1;

        switch (userInput1) {
            case 1: showMenuAtm(); break;
            case 2: showMenuKalkulator(); break;
            case 3: showMenuEcommerce(); break;
            case 4: showMenuGame(); break;
            case 5: showMenuKontak(); break;
            case 6:
                cout << "\n[!] Logout. Kembali ke menu awal.\n";
                return;
            default:
                cout << "\n[!] Pilihan tidak valid.\n";
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
                cout << "\nLogin berhasil. Selamat datang, " << inputNama << "!\n";
                loginSukses = true;
                showMenuUtama();
                return;
            }
        }
        cout << "\n[!] Username atau sandi salah. Coba lagi.\n";
    }

    cout << "\n[!] Gagal login setelah 3 kali percobaan.\n";
}

void buatAkun() {
    cout << "\n==============================\n";
    cout << "|         BUAT AKUN          |\n";
    cout << "==============================\n";

    if (akunTerdaftar >= maxUser) {
        cout << "[!] Kapasitas akun penuh.\n";
        return;
    }

    string newUsername, newPassword;
    cout << "Username baru: ";
    cin >> newUsername;

    for (int i = 0; i < akunTerdaftar; ++i) {
        if (usernames[i] == newUsername) {
            cout << "[!] Username sudah ada.\n";
            return;
        }
    }

    cout << "Sandi baru   : ";
    newPassword = inputSandiDenganBintang();

    usernames[akunTerdaftar] = newUsername;
    sandi[akunTerdaftar] = newPassword;
    dataATM[akunTerdaftar].saldo = 10000;
    akunTerdaftar++;
    simpanDataAkun();
}

void simpanDataAkun() {
    ofstream file("akun.txt");
    if (file.is_open()) {
        for (int i = 0; i < akunTerdaftar; ++i) {
            file << usernames[i] << " " << sandi[i] << " " << dataATM[i].saldo << endl;
        }
        file.close();
    } else {
        cout << "[!] Gagal menyimpan data akun.\n";
    }
}

void muatDataAkun() {
    ifstream file("akun.txt");
    string uname, pass;
    int saldo;
    akunTerdaftar = 0;
    if (file.is_open()) {
        while (file >> uname >> pass >> saldo && akunTerdaftar < maxUser) {
            usernames[akunTerdaftar] = uname;
            sandi[akunTerdaftar] = pass;
            dataATM[akunTerdaftar].saldo = saldo;
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

