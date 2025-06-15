#include <iostream>
using namespace std;

const int MAX = 100; 
void sisipElemenBaru(int A[], int x, int& N) {
    int i = 0;
    bool ketemu = false;
    while (i < N && !ketemu) {
        if (x < A[i]) {
            ketemu = true;
        } else {
            i++;
        }
    }
    for (int j = N; j > i; j--) {
        A[j] = A[j - 1];
    }
    A[i] = x;
    N++;
}

int main() {
    int A[MAX], N, x;
    cout << "Masukkan jumlah elemen awal: ";
    cin >> N;
    cout << "Masukkan elemen array (urut membesar):\n";
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
    cout << "Masukkan elemen yang akan disisipkan: ";
    cin >> x;
    sisipElemenBaru(A, x, N);
    cout << "Array setelah penyisipan:\n";
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
