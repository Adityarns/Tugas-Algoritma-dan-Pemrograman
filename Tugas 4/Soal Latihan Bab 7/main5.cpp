#include <iostream>
using namespace std;

int main() {
    char karakter;
    cout << "Masukkan karakter digit (0-9): ";
    cin >> karakter;

    if (karakter >= '0' && karakter <= '9') {
        int angka = karakter - '0';  
        cout << "Hasil konversi: " << angka << endl;
    } else {
        cout << "Bukan digit! Hasil konversi diasumsikan -1" << endl;
    }

    return 0;
}
