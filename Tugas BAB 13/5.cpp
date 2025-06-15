#include <iostream>
using namespace std;

const int Nmax = 100;

void cetakHistogram(int m, int count[]) {
    for (int i = 0; i < m; i++) {
        cout << i << " | ";
        for (int j = 0; j < count[i]; j++) {
            cout << "*";
        }
        cout << " (" << count[i] << ")" << endl;
    }
}

int main() {
    int m;
    int count[Nmax];
    cout << "Masukkan jumlah elemen (m): ";
    cin >> m;
    cout << "Masukkan frekuensi masing-masing elemen:\n";
    for (int i = 0; i < m; i++) {
        cout << "Frekuensi elemen " << i << ": ";
        cin >> count[i];
    }
    cout << "\nHistogram Frekuensi:\n";
    cetakHistogram(m, count);
    return 0;
}
