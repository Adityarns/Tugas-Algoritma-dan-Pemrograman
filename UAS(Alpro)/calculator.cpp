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

void showMenuKalkulator(){
    int userInput3;
    do {
        cout << "\n--- KALKULATOR ---" << endl;
        cout << "1. KALKULATOR BIASA " << endl;
        cout << "2. KONVERSI ROMAWI" << endl;
        cout << "3. KONVERSI SUHU" << endl;
        cout << "4. KELUAR" << endl;
        cout << "Jawaban: ";
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
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
            }
    } while (userInput3 != 4); // Ulangi menu sampai user memilih keluar
    
}

void showMenuKalkulatorSederhana() {
    int userInput3;
    double hasil;

    do {
        cout << "\n--- KALKULATOR ---" << endl;
        cout << "1. PERTAMBAHAN" << endl;
        cout << "2. PENGURANGAN" << endl;
        cout << "3. PERKALIAN" << endl;
        cout << "4. PEMBAGIAN" << endl;
        cout << "5. SISA BAGI" << endl;
        cout << "6. KELUAR" << endl;
        cout << "Jawaban: ";
        cin >> userInput3;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Input tidak valid! Masukkan angka 1-6." << endl;
            continue;
        }

        if (userInput3 == 6) {
            cout << "Terima kasih telah menggunakan kalkulator!" << endl;
            break;
        }

        kalkulatorSederhana(userInput3, hasil);
        if (userInput3 >= 1 && userInput3 <= 5) {
            cout << "Hasil: " << hasil << endl;
        }
    } while (userInput3 != 6);
}

void kalkulatorSederhana(int userInput3, double& hasil) {
    int angka1, angka2;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Input tidak valid!" << endl;
        return;
    }

    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    if (cin.fail()) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Input tidak valid!" << endl;
        return;
    }

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
                cout << "Error: Tidak bisa membagi dengan nol!" << endl;
                return;
            }
            hasil = static_cast<double>(angka1) / angka2;
            break;
        case 5:
            if (angka2 == 0) {
                cout << "Error: Tidak bisa menghitung sisa bagi nol!" << endl;
                return;
            }
            hasil = angka1 % angka2;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
            break;
    }
}

void showMenuKalkulatorRomawi(){    
    int userInput3;
    do {
        cout << "\n--- KONVERSI ROMAWI ---" << endl;
        cout << "Masukkan '-1' untuk KELUAR." << endl;
        cout << "Masukkan Angka: ";
        cin >> userInput3;

        if (cin.fail()) {
            cin.clear();                  // Reset error flag
            cin.ignore(1000, '\n');      // Buang sisa inputan yang salah
            cout << "Input tidak valid! Harap masukkan angka." << endl;
            continue;
        }

        if (userInput3 != -1) {
            if (userInput3 <= 0) {
                cout << "Angka harus lebih dari 0." << endl;
            } else {
                cout << "Angka Romawi: " << konversiRomawi(userInput3) << endl;
            }
        }

    } while (userInput3 != -1);
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

    cout << "Masukkan nilai suhu: ";
    cin >> suhu;

    cout << "Masukkan satuan suhu (C/F/K): ";
    cin >> satuan;

    cout << "\n=== Hasil Konversi ===" << endl;
    konversiSuhu(suhu, satuan);

}

void konversiSuhu(double suhu, char satuan) {
    switch (satuan) {
        case 'C':
        case 'c':
            cout << "Celsius     : " << suhu << " °C" << endl;
            cout << "Fahrenheit  : " << (suhu * 9/5) + 32 << " °F" << endl;
            cout << "Kelvin      : " << suhu + 273.15 << " K" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Fahrenheit  : " << suhu << " °F" << endl;
            cout << "Celsius     : " << (suhu - 32) * 5/9 << " °C" << endl;
            cout << "Kelvin      : " << ((suhu - 32) * 5/9) + 273.15 << " K" << endl;
            break;
        case 'K':
        case 'k':
            cout << "Kelvin      : " << suhu << " K" << endl;
            cout << "Celsius     : " << suhu - 273.15 << " °C" << endl;
            cout << "Fahrenheit  : " << ((suhu - 273.15) * 9/5) + 32 << " °F" << endl;
            break;
        default:
            cout << "Satuan tidak dikenali. Gunakan C, F, atau K." << endl;
    }
}



