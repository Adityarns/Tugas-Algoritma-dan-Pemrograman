#include <iostream>
using namespace std;

void SalinLarik(int A[], int N, int B[]) {
    for (int i = 0; i < N; i++) {
        B[i] = A[i];  
    }
}

int main() {
    int N;
    cout << "Masukkan jumlah elemen: ";
    cin >> N;

    int* A = new int[N];
    int* B = new int[N];

    for (int i = 0; i < N; i++) {
        cout << "Masukkan elemen array: ";
        cin >> A[i];
    }

    SalinLarik(A, N, B);

    for (int i = 0; i < N; i++) {
        cout << "Elemen ke-" << i << " dari larik A: " << A[i] << endl;
    }

    for (int i = 0; i < N; i++) {
        cout << "Elemen ke-" << i << " dari larik B: " << B[i] << endl;    }        
    return 0;
}
