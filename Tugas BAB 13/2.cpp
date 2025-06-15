#include <iostream>
using namespace std;

const int Nmax = 100;

void hitungJumlahKarakter0dan1(char c[], int n, int& m1, int& m2) {
    m1 = 0; 
    m2 = 0; 
    for (int i = 0; i < n; i++) {
        if (c[i] == '1') {
            m1 += 1;
        } else if (c[i] == '0') {
            m2 += 1;
        }
    }
}

int main() {
    int n;
    char c[Nmax];
    int jumlah1, jumlah0;

    cout << "Masukkan jumlah karakter: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Karakter ke-" << (i + 1) << ": ";
        cin >> c[i];
    }

    hitungJumlahKarakter0dan1(c, n, jumlah1, jumlah0);

    cout << "\nJumlah karakter '1': " << jumlah1 << endl;
    cout << "Jumlah karakter '0': " << jumlah0 << endl;

    return 0;
}
