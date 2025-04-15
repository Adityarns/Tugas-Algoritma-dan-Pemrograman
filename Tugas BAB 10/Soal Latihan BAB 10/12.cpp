#include <iostream>
using namespace std;

void CetakPiramida(int n) {
    for (int i = 1; i <= n; i++) {
        for (int spasi = 1; spasi <= n - i; spasi++) {
            cout << " ";
        }
        int angka = i;
        for (int j = 1; j <= i; j++) {
            cout << angka % 10;  
            angka++;
        }
        angka -= 2; 
        for (int j = 1; j < i; j++) {
            cout << angka % 10;
            angka--;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Masukkan tinggi piramida (maks 10): ";
    cin >> n;
    if (n > 0 && n <= 10) {
        CetakPiramida(n);
    } else {
        cout << "Tinggi tidak valid. Harus antara 1 sampai 10." << endl;
    }
    return 0;
}
