#include <iostream>
#include <string>

using namespace std;

string konversiKeRomawi(int angka) {
    string romawi[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int nilai[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string hasil = "";

    for (int i = 0; i < 13; i++) {
        while (angka >= nilai[i]) {
            hasil += romawi[i];
            angka -= nilai[i];
        }
    }
    return hasil;
}

int main() {
    int angka;
    do {
        cout << "Masukkan bilangan bulat positif (0 untuk berhenti): ";
        cin >> angka;

        if (angka > 0) {
            cout << "Angka Romawi: " << konversiKeRomawi(angka) << endl;
        }
    } while (angka != 0);
    return 0;
}