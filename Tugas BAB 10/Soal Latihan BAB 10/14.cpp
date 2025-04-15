#include <iostream>
using namespace std;

void cetakWajik(int N) {
    int tengah = N / 2;
    for (int i = 0; i <= tengah; i++) {
        for (int spasi = 0; spasi < tengah - i; spasi++) {
            cout << " ";
        }
        for (int bintang = 0; bintang < 2 * i + 1; bintang++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = tengah - 1; i >= 0; i--) {
        for (int spasi = 0; spasi < tengah - i; spasi++) {
            cout << " ";
        }
        for (int bintang = 0; bintang < 2 * i + 1; bintang++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Masukkan nilai ganjil N: ";
    cin >> N;
    if (N % 2 == 0) {
        cout << "Nilai N harus ganjil!" << endl;
    } else {
        cetakWajik(N);
    }
    return 0;
}
