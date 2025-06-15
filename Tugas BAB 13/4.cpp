#include <iostream>
using namespace std;

const int Nmax = 100;

void hitungFrek(int a[], int n, int count[], int m) {
    for (int i = 0; i < m; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0 && a[i] < m) {
            count[a[i]] += 1;
        } else {
            cout << "Peringatan: nilai " << a[i] << " di luar jangkauan (0.." << m-1 << ")" << endl;
        }
    }
}

int main() {
    int a[Nmax], count[Nmax];
    int n, maxNilai;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    cout << "Masukkan nilai maksimum elemen (m): ";
    cin >> maxNilai;
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    hitungFrek(a, n, count, maxNilai);
    cout << "\nFrekuensi tiap elemen:\n";
    for (int i = 0; i < maxNilai; i++) {
        cout << "Nilai " << i << ": " << count[i] << " kali" << endl;
    }
    return 0;
}
