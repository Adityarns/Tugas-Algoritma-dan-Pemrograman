#include <iostream>
using namespace std;

void geserKiriSirkuler(int A[], int N) {
    if (N <= 1) return;

    int pertama = A[0];
    for (int i = 0; i < N - 1; i++) {
        A[i] = A[i + 1];
    }
    A[N - 1] = pertama;
}

void cetakArray(int A[], int N) {
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int N = sizeof(A) / sizeof(A[0]);

    cout << "Sebelum digeser: ";
    cetakArray(A, N);

    geserKiriSirkuler(A, N);

    cout << "Setelah digeser sirkuler ke kiri: ";
    cetakArray(A, N);

    return 0;
}
