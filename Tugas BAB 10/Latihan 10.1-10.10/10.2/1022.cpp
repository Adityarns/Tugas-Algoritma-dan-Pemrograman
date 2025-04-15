#include <iostream>

using namespace std;

void hitungLuasSegitiga() {
    double alas, tinggi, luas;
    cout << "Masukkan alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    luas = 0.5 * alas * tinggi;
    cout << "Luas segitiga adalah: " << luas << endl;
}

int main() {
    int n;

    cout << "Mulai menghitung luas N buah segitiga" << endl;
    cout << "Masukkan banyaknya segitiga (N): ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "\n--- Segitiga ke-" << i + 1 << " ---" << endl;
        hitungLuasSegitiga();
    }

    cout << "\nSelesai" << endl;

    return 0;
}