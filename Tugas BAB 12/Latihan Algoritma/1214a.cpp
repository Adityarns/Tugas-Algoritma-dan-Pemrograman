#include <iostream>
using namespace std;

int MaksLarik2(int A[], int N, int &Maks){
    Maks = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] > Maks) {
            Maks = A[i];
        }
    }
    return Maks;
}

int main(){
    int N;
    cout << "Masukkan jumlah elemen: ";
    cin >> N;
    
    int A[N];
    for (int i = 0; i < N; i++) {
        cout << "Masukkan elemen array: ";
        cin >> A[i];
    }
    
    int maks;
    MaksLarik2(A, N, maks);
    cout << "Nilai maksimum adalah: " << maks << endl;

    return 0;
}