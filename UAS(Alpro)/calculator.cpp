#include <iostream>
#include <string>
#include "global.hpp"
using namespace std;

void showMenuKalkulator();
void showMenuKalkulatorSederhana();
void showMenuKalkulatorSuhu();
void showMenuKalkulatorRomawi();

void kalkulatorSederhana(int userInput3, double& hasil);
string konversiRomawi(int userInput3);
void konversiSuhu(double suhu, char satuan);

void showMenuKalkulator() {
    int userInput3;
    do {
        cout << "\n==============================" << endl;
        cout << "|         KALKULATOR         |" << endl;
        cout << "==============================" << endl;
        cout << "| 1. Kalkulator Biasa        |" << endl;
        cout << "| 2. Konversi Romawi         |" << endl;
        cout << "| 3. Konversi Suhu           |" << endl;
        cout << "| 4. Kembali                 |" << endl;
        cout << "==============================" << endl;
        userInput3 = inputInt("Pilihan Anda: ");

        switch (userInput3) {
            case 1:
                showMenuKalkulatorSederhana();
                break;
            case 2:
                showMenuKalkulatorRomawi();
                break;
            case 3:
                showMenuKalkulatorSuhu();
                break;
            case 4:
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (userInput3 != 4);
}

void showMenuKalkulatorSederhana() {
    int userInput3;
    double hasil;

    do {
        cout << "\n==============================" << endl;
        cout << "|     KALKULATOR BIASA       |" << endl;
        cout << "|============================|" << endl;
        cout << "| 1. Penjumlahan             |" << endl;
        cout << "| 2. Pengurangan             |" << endl;
        cout << "| 3. Perkalian               |" << endl;
        cout << "| 4. Pembagian               |" << endl;
        cout << "| 5. Sisa Bagi (Modulus)     |" << endl;
        cout << "| 6. Kembali                 |" << endl;
        cout << "==============================" << endl;
        userInput3 = inputInt("Pilihan Anda: ");
        
        if (userInput3 == 6){
            break;  
        } 
        else if(userInput3 < 1 || userInput3 > 6){
            cout << "\nPilihan tidak valid.\n";
            break;
        }


        kalkulatorSederhana(userInput3, hasil);
        if (userInput3 >= 1 && userInput3 <= 5) {
            cout << "==============================" << endl;
            cout << "|           HASIL            |" << endl;
            cout << "|============================|" << endl;
            cout << "| Hasil: " << hasil << endl;
            cout << "==============================" << endl;
        }
    
        
    } while (userInput3 != 6);
}

void kalkulatorSederhana(int userInput3, double& hasil) {
    int angka1, angka2;
    
    cout << "==============================" << endl;
    angka1 = inputInt("| Masukkan angka pertama: ");
    cout << "==============================" << endl;
    angka2 = inputInt("| Masukkan angka kedua: ");

    switch (userInput3) {
        case 1:
            hasil = angka1 + angka2;
            break;
        case 2:
            hasil = angka1 - angka2;
            break;
        case 3:
            hasil = angka1 * angka2;
            break;
        case 4:
            if (angka2 == 0) {
                cout << "==============================" << endl;
                cout << "| Error: Pembagian dengan 0  |\n";
                cout << "==============================" << endl;
                return;
            }
            hasil = static_cast<double>(angka1) / angka2;
            break;
        case 5:
            if (angka2 == 0) {
                cout << "==============================" << endl;
                cout << "| Error: Modulo dengan 0     |\n";
                cout << "==============================" << endl;
                return;
            }
            hasil = angka1 % angka2;
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            break;
    }
}

void showMenuKalkulatorRomawi() {
    int angka;

    do {
        cout << "\n==============================" << endl;
        cout << "|     KONVERSI ROMAWI        |" << endl;
        cout << "|============================|" << endl;
        cout << "|     -1 untuk keluar        |" << endl;
        cout << "|============================|" << endl;
        angka = inputInt("| Masukkan angka : ");

        if (angka == -1) break;
        if (angka <= 0) {
            cout << "==============================" << endl;
            cout << "| Angka harus lebih dari 0   |\n";
            cout << "==============================" << endl;
        } else {
            string romawi = konversiRomawi(angka);
            cout << "==============================" << endl;
            cout << "|      HASIL KONVERSI        |" << endl;
            cout << "|============================|" << endl;
            cout << "| Romawi: " << romawi;
            int sisaSpasi = 28 - (9 + romawi.length());
            for (int i = 0; i < sisaSpasi; ++i) cout << " ";
            cout << "|\n";
            cout << "==============================" << endl;
        }

    } while (angka != -1);
}

string konversiRomawi(int angka) {
    int nilai[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string simbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string hasil = "";
    for (int i = 0; i < 13; i++) {
        while (angka >= nilai[i]) {
            hasil += simbol[i];
            angka -= nilai[i];
        }
    }
    return hasil;
}

void showMenuKalkulatorSuhu() {
    double suhu;
    char satuan;

    cout << "\n==============================" << endl;
    cout << "|      KONVERSI SUHU         |" << endl;
    cout << "|============================|" << endl;
    suhu = inputInt("| Masukkan nilai suhu: ");
    cout << "==============================" << endl;
    cout << "| Masukkan satuan (C/F/K): ";
    cin >> satuan;

    konversiSuhu(suhu, satuan);
}

void konversiSuhu(double suhu, char satuan) {
    cout << "==============================" << endl;
    cout << "|      HASIL KONVERSI        |" << endl;
    cout << "==============================" << endl;
    switch (satuan) {
        case 'C': case 'c':
            cout << "| Celsius     : " << suhu << " C" << endl;
            cout << "| Fahrenheit  : " << (suhu * 9/5) + 32 << " F" << endl;
            cout << "| Kelvin      : " << suhu + 273.15 << " K" << endl;
            break;
        case 'F': case 'f':
            cout << "| Fahrenheit  : " << suhu << " F" << endl;
            cout << "| Celsius     : " << (suhu - 32) * 5/9 << " C" << endl;
            cout << "| Kelvin      : " << ((suhu - 32) * 5/9) + 273.15 << " K" << endl;
            break;
        case 'K': case 'k':
            cout << "| Kelvin      : " << suhu << " K" << endl;
            cout << "| Celsius     : " << suhu - 273.15 << " C" << endl;
            cout << "| Fahrenheit  : " << ((suhu - 273.15) * 9/5) + 32 << " F" << endl;
            break;
        default:
            cout << "| Satuan tidak dikenali       |" << endl;
            cout << "| Gunakan C, F, atau K.       |" << endl;
    }
    cout << "==============================" << endl;
}
