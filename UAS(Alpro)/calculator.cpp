#include <iostream>
#include <string>
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
        cout << "Pilihan Anda: ";
        cin >> userInput3;

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
        cout << "==============================" << endl;
        cout << "| 1. Penjumlahan             |" << endl;
        cout << "| 2. Pengurangan             |" << endl;
        cout << "| 3. Perkalian               |" << endl;
        cout << "| 4. Pembagian               |" << endl;
        cout << "| 5. Sisa Bagi (Modulus)     |" << endl;
        cout << "| 6. Kembali                 |" << endl;
        cout << "==============================" << endl;
        cout << "Pilihan Anda: ";
        cin >> userInput3;

        if (userInput3 == 6) break;

        kalkulatorSederhana(userInput3, hasil);
        if (userInput3 >= 1 && userInput3 <= 5) {
            cout << "==============================" << endl;
            cout << "Hasil: " << hasil << endl;
        }

    } while (userInput3 != 6);
}

void kalkulatorSederhana(int userInput3, double& hasil) {
    int angka1, angka2;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

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
                cout << "Tidak bisa membagi dengan nol!\n";
                return;
            }
            hasil = static_cast<double>(angka1) / angka2;
            break;
        case 5:
            if (angka2 == 0) {
                cout << "Tidak bisa menghitung sisa bagi nol!\n";
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
        cout << "==============================" << endl;
        cout << "Masukkan angka (-1 untuk keluar): ";
        cin >> angka;

        if (angka == -1) break;
        if (angka <= 0) {
            cout << "Angka harus lebih dari 0.\n";
        } else {
            cout << "Romawi: " << konversiRomawi(angka) << endl;
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
    cout << "==============================" << endl;
    cout << "Masukkan nilai suhu: ";
    cin >> suhu;
    cout << "Masukkan satuan (C/F/K): ";
    cin >> satuan;

    cout << "==============================" << endl;
    konversiSuhu(suhu, satuan);
}

void konversiSuhu(double suhu, char satuan) {
    switch (satuan) {
        case 'C': case 'c':
            cout << "Celsius     : " << suhu << " \u00B0C" << endl;
            cout << "Fahrenheit  : " << (suhu * 9/5) + 32 << " \u00B0F" << endl;
            cout << "Kelvin      : " << suhu + 273.15 << " K" << endl;
            break;
        case 'F': case 'f':
            cout << "Fahrenheit  : " << suhu << " \u00B0F" << endl;
            cout << "Celsius     : " << (suhu - 32) * 5/9 << " \u00B0C" << endl;
            cout << "Kelvin      : " << ((suhu - 32) * 5/9) + 273.15 << " K" << endl;
            break;
        case 'K': case 'k':
            cout << "Kelvin      : " << suhu << " K" << endl;
            cout << "Celsius     : " << suhu - 273.15 << " \u00B0C" << endl;
            cout << "Fahrenheit  : " << ((suhu - 273.15) * 9/5) + 32 << " \u00B0F" << endl;
            break;
        default:
            cout << "Satuan tidak dikenali. Gunakan C, F, atau K." << endl;
    }
}
