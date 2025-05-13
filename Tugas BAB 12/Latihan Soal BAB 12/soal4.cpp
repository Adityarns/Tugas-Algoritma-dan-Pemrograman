#include <iostream>
using namespace std;

void tampilkanLebihKecil(int A[], int N) {
    int min = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
        }
    }

    cout << "Elemen yang lebih kecil dari nilai terkecil (" << min << "): ";
    bool ditemukan = false;
    for (int i = 0; i < N; i++) {
        if (A[i] < min) {
            cout << A[i] << " ";
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "[Tidak ada elemen yang lebih kecil dari nilai terkecil]" << endl;
    } else {
        cout << endl;
    }
}

int main() {
    int A[] = {10, 20, 5, 15, 30};
    int N = sizeof(A) / sizeof(A[0]);
    tampilkanLebihKecil(A, N);
    return 0;
}
