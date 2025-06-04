#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Fungsi Game Tebak Angka
void gameTebakAngka() {
    srand(time(0));
    int angkaRahasia = rand() % 100 + 1;
    int tebakan, percobaan = 0;

    cout << "\n=== GAME TEBAK ANGKA (1 - 100) ===\n";

    do {
        cout << "Masukkan tebakan: ";
        cin >> tebakan;
        percobaan++;

        if (tebakan < angkaRahasia)
            cout << "Terlalu kecil!\n";
        else if (tebakan > angkaRahasia)
            cout << "Terlalu besar!\n";
        else
            cout << "Selamat! Kamu menebak dengan benar dalam " << percobaan << " percobaan.\n";

    } while (tebakan != angkaRahasia);
}

// Fungsi Game Suit
void gameSuit() {
    srand(time(0));
    string pilihan[3] = {"Batu", "Gunting", "Kertas"};
    int pilihanPemain, pilihanKomputer;

    cout << "\n=== GAME SUIT (Batu-Gunting-Kertas) ===\n";
    cout << "0: Batu, 1: Gunting, 2: Kertas\n";
    cout << "Pilihan kamu (0-2): ";
    cin >> pilihanPemain;

    if (pilihanPemain < 0 || pilihanPemain > 2) {
        cout << "Input tidak valid.\n";
        return;
    }

    pilihanKomputer = rand() % 3;

    cout << "Kamu memilih: " << pilihan[pilihanPemain] << endl;
    cout << "Komputer memilih: " << pilihan[pilihanKomputer] << endl;

    if (pilihanPemain == pilihanKomputer)
        cout << "Hasil: Seri!\n";
    else if ((pilihanPemain == 0 && pilihanKomputer == 1) ||
             (pilihanPemain == 1 && pilihanKomputer == 2) ||
             (pilihanPemain == 2 && pilihanKomputer == 0))
        cout << "Hasil: Kamu menang!\n";
    else
        cout << "Hasil: Komputer menang!\n";
}

// Menu utama
void showMenuGame() {
    int userInput6;

    do {
        cout << "\n=== MENU UTAMA ===\n";
        cout << "1. Main Tebak Angka\n";
        cout << "2. Main Suit (Batu-Gunting-Kertas)\n";
        cout << "3. Keluar\n";
        cout << "jawaban: ";
        cin >> userInput6;

        switch (userInput6) {
            case 1:
                gameTebakAngka();
                break;
            case 2:
                gameSuit();
                break;
            case 0:
                cout << "Terima kasih sudah bermain!\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (userInput6 != 3);
}
