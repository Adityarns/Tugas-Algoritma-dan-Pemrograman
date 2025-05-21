#include <iostream>
using namespace std;

void tampilkanLebihBesarDariJumlahSebelumnya(int A[], int N) {
    cout << "Elemen yang lebih besar dari jumlah elemen sebelumnya: ";
    int jumlah = 0;
    bool ada = false;

    for (int i = 0; i < N; i++) {
        if (i > 0 && A[i] > jumlah) {
            cout << A[i] << " ";
            ada = true;
        }
        jumlah += A[i]; 
    }
    if (!ada) {
        cout << "[Tidak ada elemen yang memenuhi syarat]";
    }
    cout << endl;
}

int main() {
    int A[] = {1, 3, 7, 2, 20, 5};
    int N = sizeof(A) / sizeof(A[0]);
    tampilkanLebihBesarDariJumlahSebelumnya(A, N);
    return 0;
}
