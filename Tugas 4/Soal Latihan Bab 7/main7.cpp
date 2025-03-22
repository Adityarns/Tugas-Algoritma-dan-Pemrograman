#include <iostream>
using namespace std;

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

int main() {
    int angka;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> angka;

    if (angka < 1) {
        cout << "Bilangan harus positif!" << endl;
    } else {
        cout << "Angka Romawi: " << konversiRomawi(angka) << endl;
    }

    return 0;
}
