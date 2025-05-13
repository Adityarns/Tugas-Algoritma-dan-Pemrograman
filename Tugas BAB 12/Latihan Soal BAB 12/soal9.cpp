#include <iostream>
using namespace std;

// Prosedur untuk menampilkan elemen yang lebih kecil dari elemen terkecil
void tampilkanLebihKecilDariMinimum(int A[], int N) {
    // Cari elemen terkecil
    int min = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
        }
    }

    // Tampilkan elemen yang lebih kecil dari minimum
    cout << "Elemen yang lebih kecil dari " << min << ": ";
    bool ditemukan = false;
    for (int i = 0; i < N; i++) {
        if (A[i] < min) {
            cout << A[i] << " ";
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "[Tidak ada elemen yang lebih kecil dari minimum]";
    }

    cout << endl;
}

int main() {
    int A[] = {7, 3, 5, 2, 9};
    int N = sizeof(A) / sizeof(A[0]);

    tampilkanLebihKecilDariMinimum(A, N);

    return 0;
}
