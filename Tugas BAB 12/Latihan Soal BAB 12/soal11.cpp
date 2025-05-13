#include <iostream>
using namespace std;

bool semuaElemenSama(int A[], int N) {
    for (int i = 1; i < N; i++) {
        if (A[i] != A[0]) {
            return false;
        }
    }
    return true;
}

int main() {
    int A[] = {5, 5, 5, 5, 5}; // Ganti dengan {5, 5, 4, 5} untuk tes beda
    int N = sizeof(A) / sizeof(A[0]);

    if (semuaElemenSama(A, N)) {
        cout << "Semua elemen dalam larik sama." << endl;
    } else {
        cout << "Terdapat elemen yang berbeda dalam larik." << endl;
    }

    return 0;
}
