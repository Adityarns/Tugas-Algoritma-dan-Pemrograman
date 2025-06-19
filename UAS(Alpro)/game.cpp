#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Fungsi Game Tebak Angka
void gameTebakAngka() {
    srand(time(0));
    int angkaRahasia = rand() % 100 + 1;
    int tebakan, percobaan = 0;

    cout << "\n====================================\n";
    cout << "|         GAME TEBAK ANGKA         |\n";
    cout << "|==================================|\n";
    cout << "| Tebak angka dari 1 - 100         |\n";
    cout << "| Ketik 999 untuk keluar           |\n";
    cout << "|==================================|\n";

    do {
        cout << "| Tebakan kamu: ";
        cin >> tebakan;

        if (tebakan == 999) {
            cout << "| Kamu keluar dari permainan.      |\n";
            cout << "====================================\n";
            return;
        }

        percobaan++;

        if (tebakan < angkaRahasia)
            cout << "| Terlalu kecil!                   |\n";
        else if (tebakan > angkaRahasia)
            cout << "| Terlalu besar!                   |\n";
        else {
            cout << "|==================================|\n";
            cout << "| BENAR! dalam " << percobaan << " percobaan           |\n";
            cout << "|==================================|\n";
        }

    } while (tebakan != angkaRahasia);
}

// Fungsi Game Suit
void gameSuit() {
    srand(time(0));
    string pilihan[3] = {"Batu", "Gunting", "Kertas"};
    int pilihanPemain, pilihanKomputer;

    cout << "\n====================================\n";
    cout << "|         GAME SUIT LAWAN AI       |\n";
    cout << "|==================================|\n";
    cout << "| 0: Batu | 1: Gunting | 2: Kertas |\n";
    cout << "| Ketik 999 untuk keluar           |\n";
    cout << "|==================================|\n";
    cout << "| Pilihan kamu (0-2): ";
    cin >> pilihanPemain;

    if (pilihanPemain == 999) {
        cout << "| Kamu keluar dari permainan.      |\n";
        cout << "====================================\n";
        return;
    }

    if (pilihanPemain < 0 || pilihanPemain > 2) {
        cout << "| Input tidak valid!               |\n";
        cout << "====================================\n";
        return;
    }

    pilihanKomputer = rand() % 3;

    cout << "| Kamu     : " << pilihan[pilihanPemain] << "            \n";
    cout << "| Komputer : " << pilihan[pilihanKomputer] << "            \n";

    if (pilihanPemain == pilihanKomputer)
        cout << "| Hasil    : Seri!                 |\n";
    else if ((pilihanPemain == 0 && pilihanKomputer == 1) ||
             (pilihanPemain == 1 && pilihanKomputer == 2) ||
             (pilihanPemain == 2 && pilihanKomputer == 0))
        cout << "| Hasil    : Kamu Menang!          |\n";
    else
        cout << "| Hasil    : Komputer Menang!      |\n";

    cout << "====================================\n";
}

// Menu utama
void showMenuGame() {
    int userInput6;

    do {
        cout << "\n==============================\n";
        cout << "|         MENU GAME          |\n";
        cout << "|============================|\n";
        cout << "|  1. Main Tebak Angka       |\n";
        cout << "|  2. Main Suit              |\n";
        cout << "|  3. Keluar                 |\n";
        cout << "==============================\n";
        cout << "Pilih: ";
        cin >> userInput6;

        switch (userInput6) {
            case 1:
                gameTebakAngka();
                break;
            case 2:
                gameSuit();
                break;
            case 3:
                cout << "Terima kasih sudah bermain!\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (userInput6 != 3);
}

