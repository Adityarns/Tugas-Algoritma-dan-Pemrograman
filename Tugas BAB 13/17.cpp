#include <iostream>
using namespace std;

int KarakterToInteger(char c) {
    switch (c) {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        default:
            cout << "Karakter bukan digit!" << endl;
            return -1; 
    }
}

int main() {
    char input;
    cout << "Masukkan karakter digit (0-9): ";
    cin >> input;
    int hasil = KarakterToInteger(input);
    if (hasil != -1) {
        cout << "Hasil konversi: " << hasil << endl;
    }
    return 0;
}
