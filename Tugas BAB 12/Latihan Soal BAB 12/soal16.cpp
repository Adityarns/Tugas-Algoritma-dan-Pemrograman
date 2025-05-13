#include <iostream>
using namespace std;

int cariModus(int A[], int N) {
    int modus = A[0];
    int frekuensiTertinggi = 0;

    for (int i = 0; i < N; i++) {
        int hitung = 0;
        for (int j = 0; j < N; j++) {
            if (A[i] == A[j]) {
                hitung++;
            }
        }
        if (hitung > frekuensiTertinggi) {
            frekuensiTertinggi = hitung;
            modus = A[i];
        }
    }

    return modus;
}

int main() {
    int A[] = {4, 2, 4, 3, 2, 4, 2};
    int N = sizeof(A) / sizeof(A[0]);

    cout << "Modus dari larik: " << cariModus(A, N) << endl;

    return 0;
}
