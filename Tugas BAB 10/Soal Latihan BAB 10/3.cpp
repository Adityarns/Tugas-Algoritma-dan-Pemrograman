#include <iostream>
using namespace std;

void cariTerkecil(int &nilaiTerkecil);

int main() {
    int terkecil;
    cariTerkecil(terkecil);

    return 0;
}

void cariTerkecil(int &nilaiTerkecil) {
    int x;
    bool pertama = true;

    while (true) {
        cout << "Masukkan bilangan (-1 untuk berhenti): ";
        cin >> x;

        if (x == -1) {
            break;
        }
        if (pertama) {
            nilaiTerkecil = x;
            pertama = false;
        } else if (x < nilaiTerkecil) {
            nilaiTerkecil = x;
        }
    }

    if (!pertama) {
        cout << "Nilai terkecil: " << nilaiTerkecil << endl;
    } else {
        cout << "Tidak ada bilangan yang dimasukkan." << endl;
    }
}