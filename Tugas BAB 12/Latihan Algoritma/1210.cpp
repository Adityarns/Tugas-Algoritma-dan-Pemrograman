#include <iostream>
using namespace std;

const int Nmaks = 100; 
typedef int LarikInt[Nmaks];

void BacaLarikVersi(LarikInt A, int N) {
    for (int i = 0; i < N; i++) {
        cout << "Masukkan  A[" << i + 1 << "]: ";
        cin >> A[i];
    }
}

void CetakLarik(LarikInt A, int N) {
    cout << "Elemen larik: ";
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void HitungRataRata(LarikInt A, int N, float &u) {
    int total = 0;
    for (int i = 0; i < N; i++) {
        total += A[i];
    }
    u = static_cast<float>(total) / N;
}

int main() {
    LarikInt A;
    int N;
    float u;

    cout << "Masukkan jumlah  larik: ";
    cin >> N;

    BacaLarikVersi(A, N);
    CetakLarik(A, N);
    HitungRataRata(A, N, u);

    cout << "Nilai rata-rata: " << u << endl;

    return 0;
}
